module map;
using namespace std;

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

Human* Map::getPC(){
    return pc;
}



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
    }
    return GameObject{Tile{x, y}};
}

void Map::updateMap() {

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
            if (holds_alternative<Human>(objectMap[i][j])){
                Human h = get<Human>(objectMap[i][j])
                pc = &h;
            }
            else if(holds_alternative<Tile>(objectMap[i][j]) ){
                auto& obj = objectMap[i][j];
                if (auto* tile = std::get_if<Tile>(&obj)) {
                    tile->update(baseMap);
                }
            }
        }
    }
}

bool Map::playerInRange(Info info) {
    if (main_character->getInfo().x + 1 == info.x && main_character->getInfo().y + 1 == info.y) {
        return true;
    } else if (main_character->getInfo().x - 1 == info.x && main_character->getInfo().y - 1 == info.y) {
        return true;
    } else if (main_character->getInfo().x + 1 == info.x && main_character->getInfo().y - 1 == info.y) {
        return true;
    } else if (main_character->getInfo().x - 1 == info.x && main_character->getInfo().y + 1 == info.y) {
        return true;
    } else if (main_character->getInfo().x == info.x && main_character->getInfo().y - 1 == info.y) {
        return true;
    } else if (main_character->getInfo().x - 1 == info.x && main_character->getInfo().y == info.y) {
        return true;
    } else if (main_character->getInfo().x == info.x && main_character->getInfo().y + 1 == info.y) {
        return true;
    } else if (main_character->getInfo().x + 1 == info.x && main_character->getInfo().y == info.y) {
        return true;
    }

    return false;
}

Direction Map::findDirection(Info info) {
    if (main_character->getInfo().x + 1 == info.x && main_character->getInfo().y + 1 == info.y) {
        return Direction::NORTHEAST;
    } else if (main_character->getInfo().x - 1 == info.x && main_character->getInfo().y - 1 == info.y) {
        return Direction::SOUTHWEST;
    } else if (main_character->getInfo().x + 1 == info.x && main_character->getInfo().y - 1 == info.y) {
        return Direction::SOUTHEAST;
    } else if (main_character->getInfo().x - 1 == info.x && main_character->getInfo().y + 1 == info.y) {
        return Direction::NORTHWEST;
    } else if (main_character->getInfo().x == info.x && main_character->getInfo().y - 1 == info.y) {
        return Direction::SOUTH;
    } else if (main_character->getInfo().x - 1 == info.x && main_character->getInfo().y == info.y) {
        return Direction::WEST;
    } else if (main_character->getInfo().x == info.x && main_character->getInfo().y + 1 == info.y) {
        return Direction::NORTH;
    } else if (main_character->getInfo().x + 1 == info.x && main_character->getInfo().y == info.y) {
        return Direction::EAST;
    }

    return Direction::NORTH;
}


bool Map::isWalkable(Direction Dir, Info info) {
    switch(Dir){
        case Direction::NORTH:
            info.y++;
            break;
        case Direction::SOUTH:
            info.y--;
            break;
        case Direction::WEST:
            info.x--;
            break;
        case Direction::EAST:
            info.x++;
            break;
        case Direction::SOUTHWEST:
            info.y--;
            info.x--;
            break;
        case Direction::SOUTHEAST:
            info.y--;
            info.x++;
            break;
        case Direction::NORTHWEST:
            info.y++;
            info.x--;
            break;
        case Direction::NORTHEAST:
            info.y++;
            info.x++;
            break;
    }

    if (get<Tile>(objectMap[info.x][info.y]).getTileType() == TileType::VWall) {
        return false;
    }
    if (get<Tile>(objectMap[info.x][info.y]).getTileType() == TileType::HWall) {
        return false;
    } 

    for (int i = 0; i < static_cast<int>(enemies.size()); ++i) {
        if (enemies[i]->getInfo().x == info.x && enemies[i]->getInfo().y == info.y) {
            return false;
        }
    }

    if (info.x == main_character->getInfo().x && info.y == main_character->getInfo().y) {
        return false;
    }

    return true;


}

void Map::movePlayer(Direction Dir) {
    if (isWalkable(Dir, main_character->getInfo())) {
        main_character->move(Dir);

        
    }

    for (int i = 0; i < static_cast<int>(enemies.size()); ++i) {
        if (playerInRange(enemies[i]->getInfo())) {
            if (attackRandomizer()) {
                main_character->setHealth(main_character->getHealth() - enemies[i]->getAttack());
            }
        } else {
            Direction dir = randomDirection();
            if (isWalkable(dir, enemies[i]->getInfo())) {
                enemies[i]->move(dir);
            }
        }
    }
}

bool Map::attackRandomizer() {
    static mt19937   
    generator(chrono::steady_clock::now().time_since_epoch().count());
    static uniform_int_distribution<int> distribution(1, 2);
    int rand = distribution(generator);

    switch(rand) {
        case 1:
            return false;
        case 2:
            return true;
    }

    return true;
}

void Map::findEnemy(Direction Dir, Info info) {
    Info temp = info;

    switch(Dir) {
        case Direction::NORTH:
            temp.y++;
            break;
        case Direction::SOUTH:
            temp.y--;
            break;
        case Direction::WEST:
            temp.x--;
            break;
        case Direction::EAST:
            temp.x++;
            break;
        case Direction::SOUTHWEST:
            temp.y--;
            temp.x--;
            break;
        case Direction::SOUTHEAST:
            temp.y--;
            temp.x++;
            break;
        case Direction::NORTHWEST:
            temp.y++;
            temp.x--;
            break;
        case Direction::NORTHEAST:
            temp.y++;
            temp.x++;
            break;
    }

    for (int i = 0; i < static_cast<int>(enemies.size()); ++i) {
        if (enemies[i]->getInfo().x == temp.x && enemies[i]->getInfo().y == temp.y) {
            enemies[i]->setHealth(enemies[i]->getHealth() - main_character->getAttack());
        }
    }
}

void Map::playerAttack(Direction Dir) {
    findEnemy(Dir, main_character->getInfo());

    for (int i = 0; i < static_cast<int>(enemies.size()); ++i) {
        if (playerInRange(enemies[i]->getInfo())) {
            if (attackRandomizer()) {
                main_character->setHealth(main_character->getHealth() - enemies[i]->getAttack());
            }
        } else {
            Direction dir = randomDirection();
            if (isWalkable(dir, enemies[i]->getInfo())) {
                enemies[i]->move(dir);
            }
        }
        
    }
}

