export module region;
import <vector>;
import info;

export struct Region {
    int start_x,start_y,end_x,end_y;

    std::vector<Info> makeRoom();
};

// Generates the all the available coords at the beginning of the game
export std::vector<std::vector<Info>> defaultRooms();
