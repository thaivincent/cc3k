module wd;

import potion;
import decorator;
import statuseffect;
import PC;
using namespace std;

WD::WD(StatusEffect *statEffPtr): next{statEffPtr} {}

int WD::modAtk() {
    return remDef + next->modAtk();
}

int WD::modDef() {
    return remDef + next->modDef();
}


StatusEffect* WD::applyPotion(PC *pc) {
    PC *affectedPc = new WD{pc};
    return affectedPC;
}
