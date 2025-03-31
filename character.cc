export module character;
import info;
import directions;
using namespace std;

class Map;

export class Character {
    protected:
    int health_stat;
    int attack_stat;
    int defense_stat;
    int gold;
    Info info;
    Map* map;

    public:
    Character(int hp, int atk, int def, int g, int x, int y);
    Info getInfo();
    void set_map(Map* mp);
    void set_info(const Info& i);
    void move( Direction Dir );
    void attack( Direction Dir );
    int getHealth();
    int getAttack();
    int getDefense();
    
    void setGold(int g);
    void setAtk(int atk);
    void setDef(int def);
    void setHP(int hp);
};