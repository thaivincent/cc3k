export module map;
import <memory>;
import <vector>;
import <variant>;
import <string>;
import tile;


//import gold;
//import potion;
//import human;
//import goblin;


using GameObject = std::variant<Tile>;

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
    
    

    public:
    //Ctor and Dtor
        Map();
        ~Map();
    
        void print() const;
        void tick();
        void init();
        void init_state(std::string file_name);

        void printBase();
};
