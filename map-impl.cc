module map;
import <iostream>;
import <fstream>;
import <sstream>;
import <string>;
import <vector>;
import <variant>;
import tile;

using namespace std;
using GameObject = variant<Tile>;

void Map::reset(){
    objectMap.clear();
    return;
}

void Map::print(){
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
    int i = 0;
    while (getline(file,line)){
        stringstream ss(line);
        while(ss>> c){
            baseMap[i].push_back(c);
        }
        i++;
    }
}

Map::~Map(){}

void Map::init_state(string file_name){}


