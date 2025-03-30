module ba;

import potion;
import decorator;
import statuseffect;
import PC;
using namespace std;

BA::BA(StatusEffect *statEffPtr): next{statEffPtr} {}

int BA::modAtk() {
    return addAtk + next->modAtk();
}

int BA::modDef() {
    return addAtk + next->modDef();
}

StatusEffect* BA::applyPotion(PC *pc) {
    PC *affectedPc = new BA{pc};
    return affectedPC;
}
