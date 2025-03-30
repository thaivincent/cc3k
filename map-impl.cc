module map;
import <iostream>;
import <fstream>;
import <sstream>;
import <string>;
import <vector>;
import <variant>;
import <algorithm>;
import tile;
import info;
import region;

using namespace std;
using GameObject = variant<Tile>;

void Map::reset(){
    objectMap.clear();
    return;
}

// Generation functions

vector<vector<Info>> Map::defaultRooms(){
    // Rooms are labeled 1-5:
    // 0 = Top left     - Rows (3,6), Cols (3,28) 
    // 1 = Top right    - [Rows (3,4), Cols(39,62)], [Row (5), Cols(39,70)], [Row(6), Col(39,73)], [Row(7,12), Col(61,76)]
    // 2 = Middle       - Rows(10,13), Cols(38,50)
    // 3 = Bottom left  - Rows(15,21), Cols(4,25)
    // 4 = Bottom right - [Rows(16,18), Cols(65,76)] , [Rows(19,21), Col(37,76)] 

    // Break up each room into rectangular regions

    const Region R0 = {3,3,6,28};

    const Region R1_1  = {3,39,4,61};
    const Region R1_2 = {5,39,5,70};
    const Region R1_3 = {6,39,6,73};
    const Region R1_4 = {7,61,12,76};

    const Region R4_2 = {10,38,13,50};

    const Region R3 = {15,4,21,25};

    const Region R4_1 = {16,65,18,76};
    const Region R4_2 = {19,37,21,76};

    vector<vector<Info>> roomList(5);
    roomList[0] = R0.makeRoom();

    vector<Info> room1 = R1_1.makeRoom();
    room1.insert(room1.end(), R1_2.makeRoom().begin(), R1_2.makeRoom().end());
    room1.insert(room1.end(), R1_3.makeRoom().begin(), R1_3.makeRoom().end());
    room1.insert(room1.end(), R1_4.makeRoom().begin(), R1_4.makeRoom().end());
    roomList[1] = room1;

    roomList[2] = R2.makeRoom();

    roomList[3] = R3.makeRoom();

    vector<Info> room4 = R4_1.makeRoom();
    room4.insert(room4.end(),R4_2.makeRoom().begin(), R4_2.makeRoom().end());
    roomList[4] = room4;

    return roomList;
}

void Map::print() const {
    for (auto row: objectMap){
        for(auto obj: row){
            if(holds_alternative<Tile>(obj)){
                // Convert to a tile
                Tile t = get<Tile>(obj);
                cout << baseMap[t.getX()][t.getY()];
            }
            else{
                cout<<"?";
            }
        }

        cout<< endl;
    }
}

void Map::debug(){
}

void Map::init(){   
    // Resizes the vector to accomodate the 30 rows and 79 cols of the game 
    objectMap.resize(30, vector<GameObject>(79));

    // Creates a Tile object for each cell in the map
    for (int row = 0; row < 30; row++){
        for(int col = 0; col  <79; col++){
            // Create a Tile object 
            objectMap[row][col] = GameObject{Tile{row, col}};
            // Updates its type value to correspond with the basemap
            get<Tile>(objectMap[row][col]).update(baseMap);
        }
    }


}

Map::Map(){
    baseMap.resize(30, vector<char>(79));
    ifstream file{"base_map.txt"};
    string line;
    char c;
    for(int i = 0; i < 25; i++){
        getline(file,line);
        stringstream ss(line);
        for(int j = 0; j < 79; j++){
            ss >> std::noskipws >> c;
            baseMap[i][j] = c;
        }
    }
}

Map::~Map(){}

void Map::init_state(string file_name){}



