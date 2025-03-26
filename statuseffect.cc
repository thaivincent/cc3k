export module statuseffect;

import PC;
using namespace std;

export class StatusEffect {
  public:
    virtual int getAtk(PC &pc);
    virtual int getDef(PC &pc);
    virtual ~StatusEffect();
};

