export module dragon;
import enemy;

export class Dragon: public Enemy {
    private:
    bool hasBS;
    bool isHostile;

    
    public:
    Dragon(int x, int y): 
        health(150), attack(20), defense(20), gold(0), x(x), y(y), 
        wasMoved(false), hasCompass(false), isHostile(false), hasBS(false) {}
}

}