export module ph;

import potion;
import statuseffect;
import PC;
using namespace std;

export class PH: public Potion {
    static const int changeHealth = -10;
    public:
        StatusEffect* applyPotion(PC *pc) override;
};
