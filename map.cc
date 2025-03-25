export module map;
import <fstream>;
import <vector>;
import <string>;
import gameobject;

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