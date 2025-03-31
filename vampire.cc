export module vampire;
import enemy;

export class Vampire: public Enemy {
    public:
    Vampire(int x, int y):
        Enemy(50, 25, 25, 1, x, y) {}
};