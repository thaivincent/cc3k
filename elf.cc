export module elf;
import playablecharacter;

export class Elf: public PC {
    public:
    Elf(int x, int y): 
        PC(140, 30, 10, 0, x, y) {}
};
