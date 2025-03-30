module info;
import <iostream>;

using namespace std;

std::ostream& operator<<(ostream& out, const Info& info){
    out << "(" << info.x << ", " << info.y << ")"<< endl;
    return out;
}