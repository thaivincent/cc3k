export module mhoard;

import gold;
using namespace std;

export class MHoard: public Gold {
    static const int value = 4;
    public:
        void addGold(PC &pc) override;
};
