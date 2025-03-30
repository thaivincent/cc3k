export module ba;

import potion;
import decorator;
import statuseffect;
import PC;
using namespace std;

export class BA: public Potion, public Decorator {
    static const int addAtk = 5;

    public:
        BA(StatusEffect *statEffPtr);
        int modAtk() override;
        int modDef() override;
        StatusEffect* applyPotion(PC *pc) override;
};
