export module statuseffect;

using namespace std;

export class StatusEffect {
  public:
    virtual int modAtk() = 0;
    virtual int modDef() = 0;
    virtual ~StatusEffect();
};


