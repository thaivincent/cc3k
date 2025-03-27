export module elf;
import playablecharacter;

export class Elf: public PC {
    public:
    Elf(int x, int y): 
        health(140), attack(30), defense(10), gold(0), x(x), y(y), hasBS(false) {}
}