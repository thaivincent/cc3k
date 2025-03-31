import <fstream>;
import <iostream>; 
import <string>;
import map;
import directions;
using namespace std;

int main(int argc, char* argv[]){
    Map map;
    if (argc == 2){
        // Takes in a command line argument for map state, interprets and configures the game to that map state for testing.
        string file_name = argv[1];
        map.init_state(file_name);
    }
    else {cout<< "error, should init random generation" << endl;}

    string cmd;
    while (cin >> cmd){
        if (cmd == "q"){
            break;
        }
        else if (cmd == "p")
        {
            map.print();
        }
        else if(cmd == "d"){
            map.debug();
        }
        else if (cmd == "no")
        {
            map.pc.move(Direction::NORTH);
        }
        else if (cmd == "so")
        {
            map.pc.move(Direction::SOUTH);
        }
        
        else if (cmd == "ea")
        {
            map.pc.move(Direction::EAST);
        }

        else if (cmd == "we")
        {
            map.pc.move(Direction::WEST);
        }
        
        else if (cmd == "ne")
        {
            map.pc.move(Direction::NORTHEAST);
        }
    
        else if (cmd == "nw")
        {
            map.pc.move(Direction::NORTHWEST);
        }
        
        else if (cmd == "se")
        {
            map.pc.move(Direction::SOUTHEAST);
        }
        
        else if (cmd == "sw")
        {
            map.pc.move(Direction::SOUTHWEST);
        }
        
        else if (cmd == "a")
        {
            cin >> cmd;
            switch(cmd){
                case("no"): map.pc.attack(Direction::NORTH); break; 
                case("so"): map.pc.attack(Direction::SOUTH); break;
                case("ea"): map.pc.attack(Direction::EAST); break;
                case("we"): map.pc.attack(Direction::WEST); break;
                case("ne"): map.pc.attack(Direction::SOUTHEAST); break;
                case("nw"): map.pc.attack(Direction::SOUTHWEST); break;
                case("se"): map.pc.attack(Direction::NORTHEAST); break;
                case("sw"): map.pc.attack(Direction::NORTHWEST); break
            }

        }
        else{
            cout<< "Command unknown, try again" << endl;
        }

    }
}