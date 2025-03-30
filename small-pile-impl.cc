module smallpile;

import gold;
using namespace std;

void SmallPile::addGold(PC &pc) {
    pc->incGold(value);
}
