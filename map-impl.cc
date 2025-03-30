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

    Region R0 = {3,3,6,28};

    Region R1_1  = {3,39,4,61};
    Region R1_2 = {5,39,5,70};
    Region R1_3 = {6,39,6,73};
    Region R1_4 = {7,61,12,76};

    Region R2 = {10,38,13,50};

    Region R3 = {15,4,21,25};

    Region R4_1 = {16,65,18,76};
    Region R4_2 = {19,37,21,76};

    vector<vector<Info>> roomList;
    roomList.push_back(R0.makeRoom());

    vector<Info> room1 = R1_1.makeRoom();
    for (auto i: R1_2.makeRoom()){
        room1.push_back(i);
    }
    for (auto i: R1_3.makeRoom()){
        room1.push_back(i);
    }
    for (auto i: R1_4.makeRoom()){
        room1.push_back(i);
    }
   
    roomList.push_back(room1);

    roomList.push_back( R2.makeRoom());

    roomList.push_back( R3.makeRoom());

    vector<Info> room4 = R4_1.makeRoom();
    for (auto i: R4_2.makeRoom()){
        room4.push_back(i);
    }
    roomList.push_back(room4);

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
    vector<vector<Info>> rooms = defaultRooms();
    for (auto room: rooms){
        for(auto i : room){
            cout << i;
        }
    }
}

void Map::init(){   
    // Resizes the vector to accomodate the 30 rows and 79 cols of the game 
    objectMap.resize(numRows, vector<GameObject>(numCols));

    // Creates a Tile object for each cell in the map
    for (int row = 0; row < numRows; row++){
        for(int col = 0; col < numCols; col++){
            // Create a Tile object 
            objectMap[row][col] = GameObject{Tile{row, col}};
            // Updates its type value to correspond with the basemap
            get<Tile>(objectMap[row][col]).update(baseMap);
        }
    }


}

Map::Map(){
    baseMap.resize(numRows, vector<char>(numCols));
    ifstream file{"base_map.txt"};
    string line;
    char c;
    for(int i = 0; i < numRows; i++){
        getline(file,line);
        stringstream ss(line);
        for(int j = 0; j < numCols; j++){
            ss >> std::noskipws >> c;
            baseMap[i][j] = c;
        }
    }
}

Map::~Map(){}

void Map::init_state(string file_name){}



