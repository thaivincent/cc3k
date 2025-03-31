export module tile;
import <vector>;
import info;

export enum class TileType {VWall, HWall, Floor, Hallway, Null, Door};

export class Tile {
    TileType t = TileType::Null;
    Info info;
    public:
    // Update will check the Tile coordinates, and refer to the basemap to see which type it should be at that x-y location.
        void update(const std::vector<std::vector<char>>& basemap);
    //Ctor
        Tile() = default;
        Tile(int x, int y);
        Tile(int x, int y, char c);
    //Accessors
        int getX();
        int getY();
        TileType getTileType();

};
