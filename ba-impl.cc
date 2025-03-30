module ba;

import potion;
import decorator;
import statuseffect;
import PC;
using namespace std;

BA::BA(int x, int y): info{x, y}, next{nullptr} {}

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
