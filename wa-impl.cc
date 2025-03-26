module wa;

import item;
import decorator;
import statuseffect;
using namespace std;

WA::WA(StatusEffect *statEffPtr): next{statEffPtr} {}

int WA::modAtk() {
    return remAtk + next->modAtk();
}

int WA::modDef() {
    return remAtk + next->modDef();
}
