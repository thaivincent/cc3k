export module werewolf;
import enemy;

export class Werewolf: public Enemy {
    public:
    Werewolf(int x, int y):
        Enemy(120, 30, 5, 1, x, y) {}
};
