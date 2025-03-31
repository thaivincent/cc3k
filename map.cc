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
import info;
import character;
import playablecharacter;
import enemy;
import tile;
import human;
import item;
import goblin;


export using GameObject = std::variant<Tile, Human, Item, Goblin>;

export class Map {
    const static int numRows = 25;
    const static int numCols = 79;
    std::vector<std::vector<char>> baseMap;
    // 2D vector of smart pointers
    std::vector<std::vector<GameObject>> objectMap;
    int level = 1;
    unsigned seed;
    Human *pc;

    // For our generation functions, each one except generatePlayer will take in a vector containing all of the valid coordinates of a particular room 
    //  and insert the appropriate item inside of the objectMap
    void generatePlayer();
    void generateStairway(std::vector<std::vector<Info>>& room);
    void generatePotions(std::vector<std::vector<Info>>& room);
    void generateGold(std::vector<std::vector<Info>>& room);
    void generateEnemies(std::vector<std::vector<Info>>& room);
    // For our generation functions, will procedurely generate characters, stairs, items, and enemies in that order


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
        GameObject convertType(char c, int x, int y);
        void init_state(std::string file_name);

        void debug();
        Human* getPC();
        void reset();
        void init();


};
