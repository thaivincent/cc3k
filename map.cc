export module map;
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

//import gold;
//import potion;
//import human;
//import goblin;


using GameObject = std::variant<Tile, Human, Stairs,Items, Enemy>;

export class Map {
    const static int numRows = 25;
    const static int numCols = 79;
    std::vector<std::vector<char>> baseMap;
    // 2D vector of smart pointers
    std::vector<std::vector<GameObject>> objectMap;
    int level = 1;

    public:
    //Ctor and Dtor
        Map();
        ~Map();

    
        void print() const;
        void tick();
        void init_state(std::string file_name);

        void debug();

       
        void incLevel();
        void reset();
        void init();
};
