export module map;
import <memory>;
import <vector>;
import <variant>;
import <string>;
import tile;
import info;


//import gold;
//import potion;
//import human;
//import goblin;


using GameObject = std::variant<Tile>;

export class Map {
    const static int numRows = 30;
    const static int numCols = 79;
    std::vector<std::vector<char>> baseMap;
    // 2D vector of smart pointers
    std::vector<std::vector<GameObject>> objectMap;
    int level = 1;
    void reset();
    // For our generation functions, each one except generatePlayer will take in a vector containing all of the valid coordinates of a particular room 
    //  and insert the appropriate item inside of the objectMap
    void generatePlayer();
    void generateStairway(std::vector<std::vector<Info>>& room);
    void generatePotions(std::vector<std::vector<Info>>& room);
    void generateGold(std::vector<std::vector<Info>>& room);
    void generateEnemies(std::vector<std::vector<Info>>& room);

    // Helpers:
    // Takes in a 2D vector of coordinates which is represented by a room, returns a random coordinate in the vector.
    Info rngSelect(std::vector<std::vector<Info>>& room );
    // Generates the all the available coords at the beginning of the game
    std::vector<std::vector<Info>> defaultRooms();
    

    public:
    //Ctor and Dtor
        Map();
        ~Map();
    
        void print() const;
        void tick();
        void init();
        void init_state(std::string file_name);

        void debug();
};
