export module enemy;
import character;
using namespace std;


export class Enemy: public Character {
    public:
    bool hasCompass;
    Enemy(int hp, int atk, int def, int g, int x, int y);
    virtual ~Enemy();
};