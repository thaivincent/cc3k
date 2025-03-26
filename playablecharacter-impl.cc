module PC;
import character;
import gold;
import statuseffect;
using namespace std;

int PC::modAtk() {
    return getAtk();
}

int PC::modDef() {
    return getDef();
}
