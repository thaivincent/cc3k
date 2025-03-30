module ph;

import potion;
import statuseffect;
import PC;
using namespace std;

StatusEffect* PH::applyPotion(PC *pc) {
    pc->updateHealth(changeHealth);
    return pc;
}
