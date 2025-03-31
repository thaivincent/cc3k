export module decorator;
import character;
import statuseffect;
using namespace std;

export class Decorator: public Character {
    protected:
        StatusEffect* statusEffect;
        Character* decorated_character;
    public:
        virtual ~Decorator();
        int getAttack() override;
        int getDefense() override;
};
