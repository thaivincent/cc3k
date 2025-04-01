module enemy;
using namespace std;

Enemy::Enemy(int hp, int atk, int def, int g, int x, int y): 
        Character(hp, atk, def, g, x, y), hasCompass(false) {}

Enemy::~Enemy() {}
