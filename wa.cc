export module wa;

import item;
import statuseffect;
using namespace std;

export class WA: public Item, public StatusEffect {
    static const int remAtk = -5;

    public:
        WA();
        int modAtk() override;
        int modDef() override;
};
