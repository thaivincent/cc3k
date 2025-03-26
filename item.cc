export module item;

import gameobject;
import info;
import PC;
using namespace std;

export class Item: public GameObject {
    int x;
    int y;

    public:
        virtual Info getInfo() = 0;
        virtual void onPickup() = 0;
};
