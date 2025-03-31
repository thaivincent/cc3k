module map;

using namespace std;
using GameObject = variant<Tile>;

void Map::reset(){
    objectMap.clear();
    return;
}


// Pseudo-random helper functions
vector<Info> Map::roomSelect(vector<vector<Info>>& rooms){
    default_random_engine rng{seed};
    shuffle(rooms.begin(),rooms.end(),rng);
    vector<Info> room = rooms.back();
    return room;
}

Info Map::coordSelect(vector<Info> room){
    default_random_engine rng{seed};
    shuffle(room.begin(),room.end(),rng);
    Info coord = room.back();
    room.pop_back(); // Removes this coordinate from the list so that subsequent calls cannot return the same coordinate
    return coord;
}

// Generation functions

/*
// Generates the stair and PC
vector<vector<Info>>& Map::generateUnique(unique_ptr<PC> pc){
    vector<vector<Info>> rooms = defaultRooms();
    vector<Info> PC_room = roomSelect(rooms);
    // Temporarily pop PC_room from room list
    rooms.pop_back();
    // Select a new room from the room list with PC_room removed
    vector<Info> s_room = rooms.back();

    // Pop 2 coordinates from the 2 selected rooms
    Info s_coord = coordSelect(s_room);
    Info PC_coord = coordSelect(PC_room);

    // Push back PC_room to room list.
    rooms.push_back(PC_room); 
    
    
    // Transfers ownership to the gameMap
    gameMap[PC_coord.x][PC_coord.y] = std::move(*pc);

    // Create a Stair GameObject and insert into gameMap:
        

    return &rooms;
}

vector<vector<Info>>& Map::generatePotions(vector<vector<Info>>& rooms){
    const static int MAX_FLOOR_ITEMS = 10;


}
    */

void Map::print() const {
    for (auto row: objectMap){
        for(auto obj: row){
            if(holds_alternative<Tile>(obj)){
                // Convert to a tile
                Tile t = get<Tile>(obj);
                cout << baseMap[t.getX()][t.getY()];
            }
            else{
                cout<<"?";
            }
        }

        cout<< endl;
    }
}

void Map::debug(){
    vector<vector<Info>> rooms = defaultRooms();
    vector<Info> room = roomSelect(rooms);
    Info coord = coordSelect(room);
    cout << coord;
}

void Map::init(){   
    // Resizes the vector to accomodate the 30 rows and 79 cols of the game 
    objectMap.resize(numRows, vector<GameObject>(numCols));

    // Creates a Tile object for each cell in the map
    for (int row = 0; row < numRows; row++){
        for(int col = 0; col < numCols; col++){
            // Create a Tile object 
            objectMap[row][col] = GameObject{Tile{row, col}};
            // Updates its type value to correspond with the basemap
            get<Tile>(objectMap[row][col]).update(baseMap);
        }
    }


}

Map::Map(){
    //Initialize map with a time-based seed
    seed = chrono::system_clock::now().time_since_epoch().count();

    baseMap.resize(numRows, vector<char>(numCols));
    ifstream file{"base_map.txt"};
    string line;
    char c;
    for(int i = 0; i < numRows; i++){
        getline(file,line);
        stringstream ss(line);
        for(int j = 0; j < numCols; j++){
            ss >> std::noskipws >> c;
            baseMap[i][j] = c;
        }
    }
}

Map::~Map(){}

void Map::init_state(string file_name){}

<<<<<<< HEAD
=======
void Map::incLevel() {
    ++level;
}

>>>>>>> compiled_code_1
