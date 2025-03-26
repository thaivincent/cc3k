export module map;
import <vector>;
import <string>;
import <variant>;
import gold;
import potion
import human;
import goblin;

using GameObject = std::variant<Gold,Potion,Human,Goblin>;

class TextDisplay;

export class Map {

    std::vector<std::vector<GameObject>> theMap;
    TextDisplay * td;
    void reset();
    public:
        void tick();
        void init();

        void init_state(std::vector<std::vector<GameObject>> map_state);

    
}