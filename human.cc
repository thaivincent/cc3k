export module human;
import playablecharacter;

export class Human: public PC {
    public:
    //Ctor
    //Added map class into parameters so the player can see if it can move or not
    
    Human(int x, int y): 
        PC(140, 20, 20, 0, x, y) {}
    
};