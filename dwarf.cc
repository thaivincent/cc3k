export module dwarf;
import playablecharacter;

export class Dwarf: public PC {
    public:
    Human(int x, int y): 
        health(100), attack(20), defense(30), gold(0), x(x), y(y), hasBS(false) {}
}