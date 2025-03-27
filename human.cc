export module human;
import playablecharacter;

export class Human: public PC {
    public:
    Human(int x, int y): 
        health(140), attack(20), defense(20), gold(0), x(x), y(y), hasBS(false) {}
}