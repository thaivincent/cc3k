export module tile;
import <iostream>;
import <vector>;
import info;

export enum class TileType {VWall, HWall, Floor, Hallway, Null, Door};

export class Tile {
    TileType t = TileType::Null;
    int x,y;
    public:
    // Update will check the Tile coordinates, and refer to the basemap to see which type it should be at that x-y location.
        void update(std::vector<std::vector<char>>& basemap);
    //Ctor
        Tile(int x, int y);

};
