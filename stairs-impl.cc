module stairs;

import item;
import map;
using namespace std;

void Stairs::useStairs(Map &map) {
    map.reset();
    map.incLevel();
    map.init();
}