export module phoenix;
import enemy;

export class Phoenix: public Enemy {
    public:
    Phoenix(int x, int y):
        Enemy(50, 35, 20, 1, x, y) {}
};