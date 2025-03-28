export module map;
import <memory>;
import <vector>;
import <string>;
import <variant>;
import tile;

//import gold;
//import potion
//import human;
//import goblin;


using GameObject = std::variant<Tile>;

class TextDisplay;

export class Map {  
    std::vector<std::vector<char>> baseMap;
    // 2D vector of smart pointers
    std::vector<std::vector<GameObject>> objectMap;
    int level = 1;
    void reset();
    void generatePlayer();
    void generateStairway();
    void generatePotions();
    void generateGold();
    void generateEnemies();
    void print();
    

    public:
        void tick();
        void init();
        void init_state(string file_name);

};
