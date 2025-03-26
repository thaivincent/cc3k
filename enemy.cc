export module enemy;
import character;
using namespace std;

export class Enemy: public Character {
    private:
    bool wasMoved;
    bool hasCompass;
}