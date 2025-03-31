export module textdisplay;
import <cstddef>;
import <iostream>;
import <vector>;
import observer;
import subject;

class GameObject;

export class TextDisplay: public Observer {
    std::vector<std::vector<char>> theDisplay;
    bool displayStairs;
    std::vector<bool> potionSeen;

 public:
    explicit TextDisplay( std::size_t n );
    ~TextDisplay();


    // GameObject/Map tells text display that status for the game object has changed and needs to be updated.
    virtual void notify( Subject & whoNotified ) override;

    // Outputs the map of chars.
    friend std::ostream &operator<<( std::ostream &out, const TextDisplay &td );
};

std::ostream &operator<<( std::ostream &out, const TextDisplay &td );
