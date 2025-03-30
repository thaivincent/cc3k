module region;
import <vector>;
import <stdexcept>;
import<iostream>;
import info;
using namespace std;

vector<Info> Region::makeRoom(){
    vector<Info> room;
    for(int i = start_x; i <= end_x; i++){
        for(int j = start_y; j <= end_y; j++){
            room.emplace_back(i,j);
        }
    }
    return room;
}
