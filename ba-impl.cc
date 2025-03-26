module ba;

import item;
import decorator;
import statuseffect;
using namespace std;

BA::BA(StatusEffect *statEffPtr): next{statEffPtr} {}

int BA::modAtk() {
    return addAtk + next->modAtk();
}

int BA::modDef() {
    return addAtk + next->modDef();
}
