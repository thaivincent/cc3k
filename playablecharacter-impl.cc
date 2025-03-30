module PC;
import <string>;
import info;
import character;
//import gold;
import statuseffect;
using namespace std;

int PC::modAtk() {
    return getAttack();
}

int PC::modDef() {
    return getDefense();
}

void PC::incGold(const int value) {
    gold += value;
}