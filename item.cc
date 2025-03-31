export module item;
import info;
using namespace std;

export class Item {
    int x;
    int y;

    public:
        virtual Info getInfo();
        virtual void onPickup();
};
