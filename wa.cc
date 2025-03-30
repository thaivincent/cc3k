export module wa;

import potion;
import decorator;
import statuseffect;
import PC;
using namespace std;

export class WA: public Potion, public Decorator {
    static const int remAtk = -5;

    public:
        WA(StatusEffect *statEffPtr);
        int modAtk() override;
        int modDef() override;
        StatusEffect* applyPotion(PC *pc) override;
};
