module rh;

import potion;
import statuseffect;
import PC;
using namespace std;

StatusEffect* RH::applyPotion(PC *pc) {
    pc->updateHealth(changeHealth);
    return pc;
}
