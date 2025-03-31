module character;
using namespace std;

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

void Character::move( Direction Dir ) {
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

    
}

void Character::attack(Direction Dir) {

}

Info Character::getInfo() {
    return info;
}

Character::~Character() {}