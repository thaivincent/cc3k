module dhoard;

import gold;
using namespace std;

void DHoard::addGold(PC &pc) {
    pc->incGold(value);
}
