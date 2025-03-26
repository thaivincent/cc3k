export module decorator;

import statuseffect;
using namespace std;

export class Decorator: public StatusEffect {
    protected:
        StatusEffect *next;
    public:
        virtual ~Decorator();
};
