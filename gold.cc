export module gold;

import item;
import PC;
using namespace std;

export class Gold: public Item {
    virtual void addGold(PC &pc) = 0;
};
