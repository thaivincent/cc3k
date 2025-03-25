export module character;
using namespace std;

class Character {
    private:
    int health;
    int attack;
    int defense;
    int gold;
    int x;
    int y;

    public:
    virtual void move( int x, int y );
    virtual void attack( Enemy &e );
    virtual Info getInfo() const = 0;
    virtual int getHealth();
    virtual int getAttack();
    virtual int getDefense();
};