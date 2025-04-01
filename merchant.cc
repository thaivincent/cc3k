export module merchant;
import enemy;

export class Merchant: public Enemy {
    private:
    bool isHostile;

    public:
    Merchant(int x, int y):
        Enemy(30, 70, 5, 0, x, y), isHostile(false) {}
};
