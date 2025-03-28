module tile;
import <vector>;

using namespace std;

void Tile::update(){
    char c = basemap[x][y];
    if (c == '|'){
        t = TileType::Vwall;
    }
    else if (c == '.')
    {
        t = TileType::Floor;
    }
    else if (c == '-')
    {
        t = TileType::Hwall;
    }
    else if (c == '+')
    {
        t = TileType::Door;
    }
    else if (c == '#')
    {
        t = TileType::Hallway;
    }
    else{
        t = TileType::Null;
    }
    
}