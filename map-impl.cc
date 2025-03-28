module map;
import <iostream>;
import <fstream>;
import <sstream>;
import <string>;
import <vector>;
import tile;

using namespace std;

void Map::reset(){
    objectMap.clear();
    return;
}

void print(){
    for (auto row: objectMap){
        for(auto obj: row){
            if(holds_alternative<Tile>(obj)){
                // Convert to a tile
                Tile t = get<Tile>(obj);
                cout << baseMap[t.x][t.y];
            }
            else{
                cout<<"?";
            }
        }
        cout<< endl;
    }
}

void init(){   
    objectMap.resize(79, vector<GameObject>(30));
    for (int row = 0; row < 79; row++){
        for(int col = 0; col  <39; col++){
            // Create a Tile object 
            objectMap.push_back(Tile{row,col});
            objectMap[row][col].update();
        }
    }
}

Map::Map(){
    ifstream file{"base_map.txt"};
    string line;
    char c;
    i = 0;
    while (getline(file,line)){
        stringstream ss(line);
        while(ss>> c){
            baseMap[i].push_back(c)
        }
        i++;
    }
}

Map::~Map(){}

void Map::init(){
// I think we should initialize the map with only Tiles, since this represents the base terrain
    for(int row = 0; row < 30; row++){
        for(int col = 0; col < 79; col++){
            objectMap[row].emplace_back(Tile{row,col};)
        }
    }
}

void Map::init_state(){}


