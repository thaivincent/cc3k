export module character;
using namespace std;
import map;
import tile;


//Added enum classes for every direction
export enum class Direction { NORTH , SOUTH, WEST, EAST, SOUTHEAST, SOUTHWEST, NORTHEAST, NORTHWEST };

//The character class now inherits from Map to see if they can move into a certain direction
export class Character: public Map {
    private:
    Map* map;
    int health;
    int attack;
    int defense;
    int gold;
    int x;
    int y;

    public:
    virtual void move( Direction Dir );
    virtual void attack( Enemy &e );
    virtual Info getInfo() const = 0;
    virtual int getHealth();
    virtual int getAttack();
    virtual int getDefense();
};