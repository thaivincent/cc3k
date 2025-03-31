module character;
import directions;
import tile;

using namespace std;

void Character::set_map(Map* mp) {
    map = mp;
}

Character::Character(int hp, int atk, int def, int g, int x, int y): 
        health_stat(hp), attack_stat(atk), defense_stat(def), gold(g), info{x,y} {}

int Character::getHealth() {
    return health_stat;
}

int Character::getAttack() {
    return attack_stat;
}

int Character::getDefense() {
    return defense_stat;
}

void Character::move(Direction Dir) {
    if(Dir == 0){
        if (holds_alternative<Tile>(map.gameMap[info.x][info.y + 1])){
            Tile t = get<Tile>(map.gameMap[info.x][info.y + 1]);
            if (t.type == 2){
                swap(map.gameMap[info.x][info.y + 1],map.gameMap[info.x][info.y]);
            }
        }
    }
    else if (Dir == 1)
    {
        /* code */
    }
    
}

void Character::attack(Direction Dir) {
    return;
}

Info Character::getInfo() {
    return info;
}

Character::~Character() {}