export module bd;

import item;
import statuseffect;
using namespace std;

export class BD: public Item, public StatusEffect {
    static const int addDef = 5;

    public:
        BD();
        int modAtk() override;
        int modDef() override;
};
