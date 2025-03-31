module character;
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
        case 0: targetY++; break;  // North
        case 1: targetY--; break;  // South
        case 2: targetX--; break;  // West
        case 3: targetX++; break;  // East
        case 4: targetX++; targetY--; break;  // Northeast
        case 5: targetX--; targetY--; break;  // Northwest
        case 6: targetX++; targetY++; break;  // Southeast
        case 7: targetX--; targetY++; break;  // Southwest
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