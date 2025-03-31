export module item;

using namespace std;

export class Item {
    int x;
    int y;

    public:
        Item(int x, int y);
    // Should be pure virtual, allowing instances of Item
       // virtual Info getInfo() = 0 ;
      //  virtual void onPickup() = 0;
};
