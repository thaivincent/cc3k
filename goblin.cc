export module goblin;
import enemy;

export class Goblin: public Enemy {
    public:
    Goblin(int x, int y): 
        health(70), attack(5), defense(10), gold(1), x(x), y(y), wasMoved(false), hasCompass(false) {}
}