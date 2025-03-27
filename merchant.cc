export module merchant;
import enemy;

export class Merchant: public Enemy {
    private:
    bool isHostile;

    public:
    Merchant(int x, int y): 
        health(30), attack(70), defense(5), gold(0), 
        x(x), y(y), wasMoved(false), hasCompass(false), isHostile(false) {}

}