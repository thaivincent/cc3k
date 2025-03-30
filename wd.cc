export module wd;

import item;
import decorator;
import statuseffect;
using namespace std;

export class WD: public Item, public Decorator {
    static const int remDef = -5;

    public:
        WD(StatusEffect *statEffPtr);
        int modAtk() override;
        int modDef() override;
};
