export module bd;

import item;
import decorator;
import statuseffect;
using namespace std;

export class BD: public Item, public Decorator {
    static const int addDef = 5;

    public:
        BD(StatusEffect *statEffPtr);
        int modAtk() override;
        int modDef() override;
};
