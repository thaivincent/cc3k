export module normalgold;

import gold;
using namespace std;

export class NormalGold: public Gold {
    static const int value = 1;
    public:
        void addGold(PC &pc) override;
};
