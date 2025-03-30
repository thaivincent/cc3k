export module item;

//import gameobject;
import info;
import PC;
using namespace std;

export class Item {
    protected:
        Info info;

    public:
        virtual Info getInfo() = 0;
        virtual void onPickup() = 0;
};
