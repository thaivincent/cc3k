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
import playablecharacter;
import enemy;
import directions;
import item;
using namespace std;


//import gold;
//import potion;
//import human;
//import goblin;


using GameObject = std::variant<Tile, Human, Stairs,Items, Enemy>;

export class Map {
    PC* main_character;
    std::vector<Enemy*> enemies;
    const static int numRows = 25;
    const static int numCols = 79;
    std::vector<std::vector<char>> baseMap;
    // 2D vector of smart pointers
    std::vector<std::vector<GameObject>> objectMap;
    int level = 1;
    unsigned seed;
    // For our generation functions, each one except generatePlayer will take in a vector containing all of the valid coordinates of a particular room 
    //  and insert the appropriate item inside of the objectMap
    void generatePlayer();
    void generateStairway(std::vector<std::vector<Info>>& room);
    void generatePotions(std::vector<std::vector<Info>>& room);
    void generateGold(std::vector<std::vector<Info>>& room);
    void generateEnemies(std::vector<std::vector<Info>>& room);

    // Helpers:
    // Takes in a vector of rooms/coordinates, pops a random element and returns
    std::vector<Info> roomSelect(std::vector<std::vector<Info>>& rooms);
    Info coordSelect(std::vector<Info> room);


    public:
    //Ctor and Dtor
        Map();
        ~Map();

    
        void print() const;
        void tick();
        void init_state(std::string file_name);

        void debug();

        public:
            void incLevel();
            void reset();
            void init();
            bool isWalkable(Direction Dir, Info info);
            void movePlayer(Direction Dir);
            void playerAttack(Direction Dir);
            
};
