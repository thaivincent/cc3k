export module dragon;
import enemy;

export class Dragon: public Enemy {
    private:
    bool hasBS;
    bool isHostile;

    public:
    Dragon(int x, int y):
        Enemy(150, 20, 20, 0, x, y), hasBS(false), isHostile(false) {}
};

