export module ba;

import item;
import decorator;
import statuseffect;
using namespace std;

export class BA: public Item, public Decorator {
    int addAtk = 5;

    public:
        BA(StatusEffect *statEffPtr);
        int modAtk() override;
        int modDef() override;
};
