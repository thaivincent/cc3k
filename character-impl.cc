module character;
import<variant>;

import playablecharacter;
import human;
import enemy;
import goblin;
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
    return;
}

void Character::attack(Direction Dir) {
    // Use a pointer to Character base class to handle any derived type
    Character* target = nullptr;
    
    // Calculate target position based on direction
    int targetX = info.x;
    int targetY = info.y;
    
    switch(Dir) {
        case Direction::NORTH: targetY++; break;  // North
        case Direction::SOUTH: targetY--; break;  // South
        case Direction::EAST: targetX--; break;  // West
        case Direction::WEST: targetX++; break;  // East
        case Direction::NORTHEAST: targetX++; targetY--; break;  // Northeast
        case Direction::NORTHWEST: targetX--; targetY--; break;  // Northwest
        case Direction::SOUTHEAST: targetX++; targetY++; break;  // Southeast
        case Direction::SOUTHWEST: targetX--; targetY++; break;  // Southwest
    }
    
    
    // Check if target exists and is a character
    auto& targetObj = map.objectMap[targetX][targetY];
    if (std::holds_alternative<Human>(targetObj)) {
        target = &std::get<Human>(targetObj);
    }
    else if (std::holds_alternative<Goblin>(targetObj)) {
        target = &std::get<Goblin>(targetObj);
    }
    
    if (target) {
        // Calculate damage (same formula for all characters)
        int dmg = ceil((100.0 / (100 + target->getDefense())) * getAttack());
        
        // Apply damage
        target->health_stat -= dmg;
        
        // Check if target died
        if (target->health_stat <= 0 && std::holds_alternative<Human>(targetObj)) {
           // Quit the game
        }
        else if (target->health_stat <= 0 && std::holds_alternative<Goblin>(targetObj))
        {
            gold +=1;
        }
        
    }
}

Info Character::getInfo() {
    return info;
}

Character::~Character() {}