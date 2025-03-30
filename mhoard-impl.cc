module mhoard;

import gold;
using namespace std;

void MHoard::addGold(PC &pc) {
    pc->incGold(value);
}
