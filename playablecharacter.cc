export module playablecharacter;
import character;   
using namespace std;


export class PC: public Character {
    bool hasBS;

    public:
    PC(int hp, int atk, int def, int g, int x, int y): 
    Character(hp, atk, def, g, x, y), hasBS(false) {}
   
};
