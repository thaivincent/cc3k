module map;
import <fstream>;
import <sstream>;
import <string>;

using namespace std;

void Map::reset(){
    objectList.clear();
    return;
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

void Map::init()
// Initialize the map with only Tiles, since this represents the base terrain
    for(int row = 0; row < 30; row++){
        for(int col = 0; col < 79; col++){
            objectMap.emplace_back()
        }
    }
}

void Map::init_state(){}


