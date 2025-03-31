export module ba;
import item;
import statuseffect;
using namespace std;

export class BA: public Item, public StatusEffect {
    static const int addAtk = 5;

    public:
        BA();
        int modAtk() override;
        int modDef() override;
};
