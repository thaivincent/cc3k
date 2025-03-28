module tile;
import <vector>;

using namespace std;

// Since we have a default intialization of type to Null, we have to update on creation
Tile::Tile(int x, int y): x{x}, y{y}{}

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
