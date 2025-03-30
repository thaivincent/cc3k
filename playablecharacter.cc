export module PC;
import <string>;
import character;
//import gold;
import statuseffect;
import map;
using namespace std;


export class PC: public Character, public StatusEffect {
    private:
    bool hasBS;

    public:
    //virtual void useLoot(Loot l);
    //virtual void incGold(Gold g);

    // for temp potion modifications
    int modAtk() override;
    int modDef() override;

    void incGold(const int value);
};
