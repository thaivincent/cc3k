import <fstream>;
import <iostream>; 
import <string>;
import map;
using namespace std;

int main(int argc, char* argv[]){
    Map map;
    if (argc == 2){
        // Takes in a command line argument for map state, interprets and configures the game to that map state for testing.
        string file_name = argv[1];
        map.init_state(file_name);
    }
    else {map.init();}

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
            cin >> cmd;
            switch(cmd){
                
            }

        }
        
        else if (cmd == "no")
        {
            /* code */
        }
        
        

    }
}