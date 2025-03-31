module tile;

using namespace std;

// Since we have a default intialization of type to Null, we have to update on creation
Tile::Tile(int x, int y): info{x,y}{}

void Tile::update(const vector<vector<char>>& basemap){
    char c = basemap[info.x][info.y];
    if (c == '|'){
        t = TileType::VWall;
    }
    else if (c == '.')
    {
        t = TileType::Floor;
    }
    else if (c == '-')
    {
        t = TileType::HWall;
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

int Tile::getX(){
    return info.x;
}

int Tile::getY(){
    return info.y;
}
