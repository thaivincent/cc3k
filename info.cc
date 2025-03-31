export module info;
import <iostream>;

export struct Info{
    int x,y;
};

export std::ostream& operator<<(std::ostream& out, const Info &info);