export module potion;

import item;
import PC;
import StatusEffect;
using namespace std;

export class Potion: public Item {

    //when the user gives a command, main will call pc->usePotion(direction, map).
    //They can then access the potion using map, if one exists there they will call potion.applyPotion(pc)
    virtual StatusEffect* applyPotion(PC *pc) = 0;
}