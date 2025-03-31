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
import character;
import playablecharacter;
import human;
import item;
import goblin;

using namespace std;
using GameObject = variant<monostate, Tile, Human, Item, Goblin>;

void Map::reset(){
    objectMap.clear();
    return;
}


// Pseudo-random helper functions
vector<Info> Map::roomSelect(vector<vector<Info>>& rooms){
    default_random_engine rng{seed};
    shuffle(rooms.begin(),rooms.end(),rng);
    vector<Info> room = rooms.back();
    return room;
}

Info Map::coordSelect(vector<Info> room){
    default_random_engine rng{seed};
    shuffle(room.begin(),room.end(),rng);
    Info coord = room.back();
    room.pop_back(); // Removes this coordinate from the list so that subsequent calls cannot return the same coordinate
    return coord;
}


void Map::print() const {
    for (auto row: objectMap){
        for(auto obj: row){
            if(holds_alternative<Tile>(obj)){
                // Convert to a tile
                Tile t = get<Tile>(obj);
                cout << baseMap[t.getX()][t.getY()];
            }
            else if (holds_alternative<Human>(obj))
            {
                cout << "@";
            }
            else if (holds_alternative<Item>(obj))
            {
                cout<< "I";
            }
            else if (holds_alternative<Goblin>(obj)) {
                cout << "E";
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


Map::Map(){
    //Initialize map with a time-based seed
    seed = chrono::system_clock::now().time_since_epoch().count();

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

GameObject Map::convertType(char c, int x, int y) {
    switch(c) {
        case '@':
            return GameObject{Human{x, y}};
            break;
        case 'V':
            return GameObject{Goblin{x, y}};
            break;
        case 'W':
            return GameObject{Goblin{x, y}};
            break;
        case 'M':
            return GameObject{Goblin{x, y}};
            break;
        case 'N':
            return GameObject{Goblin{x, y}};
            break;
        case 'D':
            return GameObject{Goblin{x, y}};
            break;
        case 'X':
            return GameObject{Goblin{x, y}};
            break;
        case 'T':
            return GameObject{Goblin{x, y}};
            break;
        case 'P':
            return GameObject{Item{x, y}};
            break;
        case 'G':
            return GameObject{Item{x, y}};
            break;
        case 'C':
            return GameObject{Item{x, y}};
            break;
        case 'B':
            return GameObject{Item{x, y}};
            break;
        case '|':
            return GameObject{Tile{x, y}}
            break;
        case '.':
            return GameObject{Tile{x, y}}
            break;
        case '-':
            return GameObject{Tile{x, y}}
            break;
        case '+':
            return GameObject{Tile{x, y}}
            break;
        case '#':
            return GameObject{Tile{x, y}}
            break;
    }
}

void Map::init_state(string file_name){

    baseMap.resize(numRows, vector<char>(numCols));
    objectMap.resize(numRows, vector<GameObject>(numCols));
    ifstream file{file_name};
    string line;
    char c;
    for(int i = 0; i < numRows; i++){
        getline(file,line);
        stringstream ss(line);
        for(int j = 0; j < numCols; j++){
            ss >> std::noskipws >> c;
            baseMap[i][j] = c;
            objectMap[i][j] = convertType(c, i, j);
            if (baseMap[i][j] == '@') {
                auto& obj = objectMap[i][j];
                if (auto* human = std::get_if<Human>(&obj)) {
                    pc = human;
                }
            }
            else if(holds_alternative<Tile>(objectMap[i][j]) ){
                Tile t = get<Tile>(objectMap[i][j]);
                t.update();
            }
        }
    }
}

