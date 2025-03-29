export module human;
import playablecharacter;
import map;

export class Human: public PC {
    public:
    //Ctor
    //Added map class into parameters so the player can see if it can move or not
    Human(int x, int y, Map mp): 
        health(140), attack(20), defense(20), gold(0), x(x), y(y), hasBS(false), map(mp) {}


    //Switch cases for each direction
    //Needs creation of can_move(int x, int y) in map 
    void move(Direction Dir) {
        int temp_x = x;
        int temp_y = y

        switch(Dir) {
            case Direction::NORTH:
                temp_y++;
                break;
            case Direction::SOUTH:
                temp_y--;
                break;
            case Direction::EAST:
                temp_x++;
                break;
            case Direction::WEST:
                temp_x--;
                break;
            case Direction::SOUTHEAST:
                temp_x++;
                temp_y--;
                break;
            case Direction::SOUTHWEST:
                temp_x--;
                temp_y--;
                break;
            case Direction::NORTHEAST:
                temp_x++;
                temp_y++;
                break;
            case Direction::NORTHWEST:
                temp_x--;
                temp_y++;
                break;
        }

        if (map.can_move(temp_x, temp_y) == false) {
            break;
        } else {
            x = temp_x;
            y = temp_y;
        }
    }
}