export module rh;

import potion;
import statuseffect;
import PC;
using namespace std;

export class RH: public Potion {
    static const int changeHealth = 10;
    public:
        StatusEffect* applyPotion(PC *pc) override;
};
