export module wd;

import item;
import statuseffect;
using namespace std;

export class WD: public Item, public StatusEffect {
    static const int remDef = -5;

    public:
        WD();
        int modAtk() override;
        int modDef() override;
};
