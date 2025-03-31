export module orc;
import playablecharacter;

export class Orc: public PC {
    public:
    Orc(int x, int y): 
        PC(180, 30, 25, 0, x, y) {}
};