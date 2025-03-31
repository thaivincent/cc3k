export module item;
import info;
using namespace std;

export class Item {
    int x;
    int y;

    public:
        virtual Info getInfo() = 0;
        virtual void onPickup() = 0;
};
