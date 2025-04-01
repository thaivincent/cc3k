export module dwarf;
import playablecharacter;

export class Dwarf: public PC {
    public:
    Dwarf(int x, int y): 
        PC(100, 20, 30, 0, x, y) {}
};
