module bd;

import potion;
import decorator;
import statuseffect;
import PC;
using namespace std;

BD::BD(StatusEffect *statEffPtr): next{statEffPtr} {}

int BD::modAtk() {
    return addDef + next->modAtk();
}

int BD::modDef() {
    return addDef + next->modDef();
}


StatusEffect* BD::applyPotion(PC *pc) {
    PC *affectedPc = new BD{pc};
    return affectedPC;
}
