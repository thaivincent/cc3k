export module dhoard;

import gold;
using namespace std;

export class DHoard: public Gold {
        static const int value = 6;
        bool isDead;
    public:
        void addGold(PC &pc) override;
};
