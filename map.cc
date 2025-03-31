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
import character;
import playablecharacter;
import human;

//import gold;
//import potion;




using GameObject = std::variant<Tile, Human, Stairs,Items, Enemy>;

export class Map {
    const static int numRows = 25;
    const static int numCols = 79;
    std::vector<std::vector<char>> baseMap;
    std::vector<std::vector<GameObject>> objectMap;
    Human pc;
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
