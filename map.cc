export module map;
import <vector>;
import <string>;
import <variant>;
import tile;

//import gold;
//import potion
//import human;
//import goblin;


using GameObject = std::variant<Gold,Tile,Potion,Human,Goblin>;

class TextDisplay;

export class Map {  
    std::vector<std::vector<char>> baseMap;
    std::vector<std::vector<GameObject>> objectMap;
    TextDisplay * td;
    int level = 1;
    void reset();
    void generatePlayer();
    void generateStairway();
    void generatePotions();
    void generateGold();
    void generateEnemies();
    

    public:
        void tick();
        void init();
        void init_state(string file_name);

};
