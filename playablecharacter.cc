export module PC;
import character;
import gold;
import loot;
using namespace std;


export class PC: public Character {
    private:
    bool hasBS;

    public:
    virtual void useLoot(Loot l);
    virtual void incGold(Gold g);
}
