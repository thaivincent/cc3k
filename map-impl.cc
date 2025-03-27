module map;
import <fstream>;
import <sstream>;
import <string>;

using namespace std;

void Map::reset(){
    objectList.clear();
    return;
}

Map::Map(): objectList{vector objectList()} {
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

void Map::init(){}

void Map::init_state(){}


