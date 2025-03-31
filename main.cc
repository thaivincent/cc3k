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
        }else if (cmd == "p"){
            map.print();
        }else if(cmd == "d"){
            map.debug();
        }else if (cmd == "no"){
            map.getPC()->move(Direction::NORTH);
        }else if (cmd == "so"){
            map.getPC()->move(Direction::SOUTH);
        }else if (cmd == "ea"){
            map.getPC()->move(Direction::EAST);
        }else if (cmd == "we"){
            map.getPC()->move(Direction::WEST);
        }else if (cmd == "ne"){
            map.getPC()->move(Direction::NORTHEAST);
        }else if (cmd == "nw"){
            map.getPC()->move(Direction::NORTHWEST);
        }else if (cmd == "se"){
            map.getPC()->move(Direction::SOUTHEAST);
        }else if (cmd == "sw"){
            map.getPC()->move(Direction::SOUTHWEST);
        }
        
        else if (cmd == "a"){
            cin >> cmd;
            if (cmd == "no") {
                map.getPC()->attack(Direction::NORTH);
            } else if (cmd == "so") {
                map.getPC()->attack(Direction::SOUTH);
            } else if (cmd == "ea") {
                map.getPC()->attack(Direction::EAST);
            } else if (cmd == "we") {
                map.getPC()->attack(Direction::WEST);
            } else if (cmd == "ne") {
                map.getPC()->attack(Direction::NORTHEAST);  
            } else if (cmd == "nw") {
                map.getPC()->attack(Direction::NORTHWEST);  
            } else if (cmd == "se") {
                map.getPC()->attack(Direction::SOUTHEAST);
            } else if (cmd == "sw") {
                map.getPC()->attack(Direction::SOUTHWEST);
            } else {
                // Handle invalid input
                std::cout << "Invalid direction!" << std::endl;
            }

        }
        else{
            cout<< "Command unknown, try again" << endl;
        }
        else if (cmd == "no")
        {
            /* code */
        }
        else if (cmd == "so")
        {
            /* code */
        }
        
        else if (cmd == "ea")
        {
            /* code */
        }

        else if (cmd == "we")
        {
            /* code */
        }
        
        else if (cmd == "ne")
        {
            /* code */
        }
    
        else if (cmd == "nw")
        {
            /* code */
        }
        
        else if (cmd == "se")
        {
            /* code */
        }
        
        else if (cmd == "sw")
        {
            /* code */
        }
        
        else if (cmd == "a")
        {
            // cin >> cmd;
            // switch(cmd){
            //     case("no"): map.
            //     case("so"):
            //     case("ea"):
            //     case("we"):
            //     case("ne"):
            //     case("nw"):
            //     case("se"):
            //     case("sw"):
                
            // }
            cout << "";

        }
        
        else if (cmd == "no")
        {
            /* code */
        }
        
        

    }
}