export module human;
import playablecharacter;
import gold;

export class Human: public PC {
    public:
    Human(int x, int y);
    void incGold(Gold g);
    
};
