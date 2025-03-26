module wd;

import item;
import decorator;
import statuseffect;
using namespace std;

WD::WD(StatusEffect *statEffPtr): next{statEffPtr} {}

int WD::modAtk() {
    return remDef + next->modAtk();
}

int WD::modDef() {
    return remDef + next->modDef();
}
