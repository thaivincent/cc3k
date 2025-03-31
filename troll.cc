export module troll;
import enemy;

export class Troll: public Enemy {
    public:
    Troll(int x, int y):
        Enemy(120, 25, 15, 1, x, y) {}
};