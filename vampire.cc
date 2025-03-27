export module vampire;
import enemy;

export class Vampire: public Enemy {
    public:
    Vampire(int x, int y): 
        health(50), attack(25), defense(25), gold(1), x(x), y(y), wasMoved(false), hasCompass(false) {}

    
}