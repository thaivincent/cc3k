export module human;
import playablecharacter;
import gold;

export class Human: public PC {
    public:
    //Ctor
    //Added map class into parameters so the player can see if it can move or not

    Human(int x, int y);
    
    void incGold(Gold g) override;
    
};