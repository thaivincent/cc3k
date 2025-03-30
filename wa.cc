export module wa;

import item;
import decorator;
import statuseffect;
using namespace std;

export class WA: public Item, public Decorator {
    static const int remAtk = -5;

    public:
        WA(StatusEffect *statEffPtr);
        int modAtk() override;
        int modDef() override;
};
