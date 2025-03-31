export module goblin;
import enemy;

export class Goblin: public Enemy {
    public:
    Goblin(int x, int y):
        Enemy(70, 5, 10, 1, x, y) {}
};