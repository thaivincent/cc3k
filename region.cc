export module region;
import <vector>;
import <Info>;

struct Region {
    int x_start,y_start,x_end,y_end;

    std::vector<Info> makeRoom();
}