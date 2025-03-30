module wa;

import potion;
import decorator;
import statuseffect;
import PC;
using namespace std;

WA::WA(StatusEffect *statEffPtr): next{statEffPtr} {}

int WA::modAtk() {
    return remAtk + next->modAtk();
}

int WA::modDef() {
    return remAtk + next->modDef();
}

StatusEffect* WA::applyPotion(PC *pc) {
    PC *affectedPc = new WA{pc};
    return affectedPC;
}
