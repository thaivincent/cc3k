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

// PC* PC::usePotion(string dir, Map &map) {
//     Info info = changeDir(dir, map);
//     return (map[info.x][info.y]).applyPotion(this);
// }