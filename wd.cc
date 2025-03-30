export module wd;

import potion;
import decorator;
import statuseffect;
import PC;
using namespace std;

export class WD: public Potion, public Decorator {
    static const int remDef = -5;

    public:
        WD(StatusEffect *statEffPtr);
        int modAtk() override;
        int modDef() override;
        StatusEffect* applyPotion(PC *pc) override;
};
