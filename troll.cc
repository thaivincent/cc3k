export module troll;
import enemy;

export class Troll: public Enemy {
    public:
    Troll(int x, int y): 
        health(120), attack(25), defense(15), gold(1), x(x), y(y), wasMoved(false), hasCompass(false) {}
}