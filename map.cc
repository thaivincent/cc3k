export module map;
import <memory>;
import <vector>;
import <variant>;
import <string>;
import tile;
import info;
import PC;
import human;


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
    unique_ptr<GameObject> PCptr; 
    int level = 1;
    unsigned seed;

    void reset();
    // For our generation functions, we first generate the PC and stairs which have to be in seperate rooms, and then handle the item and enemy generation.
    std::vector<std::vector<Info>>& generateUnique(PC& pc);
    void generatePotions(room);
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
        void init();
        void init_state(std::string file_name);

        void debug();
};
