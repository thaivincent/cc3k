export module subject;
import <string>;
import <vector>;
import info;

class Observer;

export class Subject{
    std::vector<Observer*> observers;    
    public:
        void attach( Observer *o);
        void notifyObservers();
        virtual Info getInfo() const = 0;
        
};




