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
            map.movePlayer(Direction::NORTH);
        }else if (cmd == "so"){
            map.movePlayer(Direction::SOUTH);
        }else if (cmd == "ea"){
            map.movePlayer(Direction::EAST);
        }else if (cmd == "we"){
            map.movePlayer(Direction::WEST);
        }else if (cmd == "ne"){
            map.movePlayer(Direction::NORTHEAST);
        }else if (cmd == "nw"){
            map.movePlayer(Direction::NORTHWEST);
        }else if (cmd == "se"){
            map.movePlayer(Direction::SOUTHEAST);
        }else if (cmd == "sw"){
            map.movePlayer(Direction::SOUTHWEST);
        }
        
        else if (cmd == "a"){
            cin >> cmd;
            if (cmd == "no") {
                map.playerAttack(Direction::NORTH);
            } else if (cmd == "so") {
                map.playerAttack(Direction::SOUTH);
            } else if (cmd == "ea") {
                map.playerAttack(Direction::EAST);
            } else if (cmd == "we") {
                map.playerAttack(Direction::WEST);
            } else if (cmd == "ne") {
                map.playerAttack(Direction::NORTHEAST);  
            } else if (cmd == "nw") {
                map.playerAttack(Direction::NORTHWEST);  
            } else if (cmd == "se") {
                map.playerAttack(Direction::SOUTHEAST);
            } else if (cmd == "sw") {
                map.playerAttack(Direction::SOUTHWEST);
            } else {
                // Handle invalid input
                std::cout << "Invalid direction!" << std::endl;
            }
            map.print();

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

        else{
            cout<< "Command unknown, try again" << endl;
        }
    }
}