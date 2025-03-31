export module character;
import info;
import directions;
using namespace std;

export class Character {
    private:
    int health_stat;
    int attack_stat;
    int defense_stat;
    int gold;
    Info info;

    public:
    Character(int hp, int atk, int def, int g, int x, int y);
    Info getInfo();
    void move( Direction Dir );
    virtual void attack( Direction Dir );
    virtual int getHealth();
    virtual int getAttack();
    virtual int getDefense();
    virtual ~Character();
    
};