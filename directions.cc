export module directions;
import <random>;
import <chrono>;
using namespace std;

export enum class Direction { NORTH , SOUTH, WEST, EAST, SOUTHEAST, SOUTHWEST, NORTHEAST, NORTHWEST };

export Direction randomDirection() {
    static mt19937   
    generator(chrono::steady_clock::now().time_since_epoch().count());
    static uniform_int_distribution<int> distribution(1, 8);
    int rand = distribution(generator);

    switch(rand) {
        case 1:
            return Direction::NORTH;
        case 2:
            return Direction::SOUTH;
        case 3:
            return Direction::EAST;
        case 4:
            return Direction::WEST;
        case 5:
            return Direction::SOUTHEAST;
        case 6:
            return Direction::SOUTHWEST;
        case 7:
            return Direction::NORTHEAST;
        case 8:
            return Direction::NORTHWEST;
    }

    return Direction::NORTH;
}