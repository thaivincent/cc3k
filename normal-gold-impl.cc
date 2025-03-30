module normalgold;

import gold;
using namespace std;

void NormalGold::addGold(PC &pc) {
    pc->incGold(value);
}
