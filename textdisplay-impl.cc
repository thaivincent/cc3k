module textdisplay;
import info;
using namespace std;

// makes a text display of an empty map (only floors)
TextDisplay::TextDisplay( size_t n ) {
    theDisplay.clear();
    theDisplay.resize(n);
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n; ++j) {
            (theDisplay[i]).push_back('.');
        }
    }
} // TextDisplay::TextDisplay

TextDisplay::~TextDisplay() {
    theDisplay.clear();
}

void TextDisplay::notify( Subject & whoNotified ) {
    size_t r = 0;
    for (auto &row : theDisplay) {
        size_t c = 0;
        Info info = whoNotified.getInfo();
        if (info.x == r) {
            for (auto &col : row) {
                if (info.y == c) {
                    //switch-case for different types to set col to corresponding char
                }
                ++c;
            }
        }
        ++r;
    }
} // TextDisplay::notify

std::ostream &operator<<( std::ostream &out, const TextDisplay &td ) {
    for (auto row : td.theDisplay) {
        for (auto gameObj : row) {
            out << gameObj;
        }
        out << '\n';
    }
    return out;
}
