export module region;
import <vector>;
import info;

export struct Region {
    int start_x,start_y,end_x,end_y;

    std::vector<Info> makeRoom();
};