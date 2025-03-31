module map;
import <iostream>;
import <fstream>;
import <sstream>;
import <string>;
import <vector>;
import <variant>;
import <algorithm>;
import <random>;
import <chrono>;
import tile;
import info;
import region;
//import PC;

using namespace std;
using GameObject = variant<Tile, Human, Stairs,Items, Enemy>;

void Map::reset(){
    objectMap.clear();
    return;
}

void Map::print() const {
    for (auto row: objectMap){
        for(auto obj: row){
            if(holds_alternative<Tile>(obj)){
                // Convert to a tile
                Tile t = get<Tile>(obj);
                cout << baseMap[t.getX()][t.getY()];
            }
            else if (holds_alternative<Tile>(obj))
            {
                /* code */
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
    vector<Info> room = roomSelect(rooms);
    Info coord = coordSelect(room);
    cout << coord;
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

void Map::incLevel() {
    ++level;
}

