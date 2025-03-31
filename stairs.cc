export module stairs;

import item;
import map;
using namespace std;

export class Stairs: public Item {
    public:
        void useStairs(Map &map);
};
