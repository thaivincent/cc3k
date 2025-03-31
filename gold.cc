export module gold;

import item;
import info;
using namespace std;

export class Gold: public Item {
    static const int value = 1;
    public:
        int getValue();
        Info getInfo() override;
        void onPickup() override;
};
