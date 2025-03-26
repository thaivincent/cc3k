export module decorator;

import statuseffect;
using namespace std;

export class Decorator: public StatusEffect {
    protected:
        TextProcessor *next;
    public:
        int getAtk(PC &pc) override;
        int getDef(PC &pc) override;
        virtual ~Decorator();
};
