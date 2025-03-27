export module orc;
import playablecharacter;

export class Orc: public PC {
    public:
    Orc(int x, int y): 
        health(180), attack(30), defense(25), gold(0), x(x), y(y), hasBS(false) {}
}