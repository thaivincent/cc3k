export module bd;

import potion;
import decorator;
import statuseffect;
import PC;
using namespace std;

export class BD: public Potion, public Decorator {
    static const int addDef = 5;

    public:
        BD(StatusEffect *statEffPtr);
        int modAtk() override;
        int modDef() override;
        StatusEffect* applyPotion(PC *pc) override;
};
