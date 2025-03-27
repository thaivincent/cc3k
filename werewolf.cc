export module werewolf;
import enemy;

export class Werewolf: public Enemy {
    public:
    Werewolf(int x, int y): 
        health(120), attack(30), defense(5), gold(1), x(x), y(y), wasMoved(false), hasCompass(false) {}
}