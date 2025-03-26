export module phoenix;
import enemy;

export class Phoenix: public Enemy {
    public:
    Phoenix(int x, int y): 
        health(50), attack(35), defense(20), gold(1), x(x), y(y), wasMoved(false), hasCompass(false) {}
}