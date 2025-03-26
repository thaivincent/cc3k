module bd;

import item;
import decorator;
import statuseffect;
using namespace std;

BD::BD(StatusEffect *statEffPtr): next{statEffPtr} {}

int BD::modAtk() {
    return addDef + next->modAtk();
}

int BD::modDef() {
    return addDef + next->modDef();
}
