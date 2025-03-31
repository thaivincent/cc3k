export module playablecharacter;
import character;
import gold;
import statuseffect;
import directions;
using namespace std;


export class PC: public Character {
    private:
    bool hasBS;

    public:
    PC(int hp, int atk, int def, int g, int x, int y): 
        Character(hp, atk, def, g, x, y), hasBS(false) {}
    virtual void useLoot() = 0;
    virtual void incGold(Gold g) = 0;
   
};
