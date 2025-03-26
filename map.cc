export module map;
import <vector>;
import <string>;
import <variant>;
import gold;
import potion
import human;
import goblin;

using GameObject = std::variant<Gold,Potion,Human,Goblin>;

class TextDisplay;

export class Map {  
    std::vector<std::vector<char>> baseMap;
    std::vector<GameObject> objectList;
    TextDisplay * td;
    void reset();
    void generatePlayer();
    void generateStairway();
    void generatePotions();
    void generateGold();
    void generateEnemies();
    

    public:
        void tick();
        void init();
        void init_state(std::vector<std::vector<GameObject>> map_state);

    
}