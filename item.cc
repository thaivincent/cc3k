export module item;
import info;
using namespace std;

export class Item {
    Info info;

    public:
        Item(Info i);
    // Should be pure virtual, allowing instances of Item
       // virtual Info getInfo() = 0 ;
      //  virtual void onPickup() = 0;
};
