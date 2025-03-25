module subject;
import <vector>;
import <string>;
import observer;

void Subject::attach(Observer *o){
    observers.emplace_back(o);
}
