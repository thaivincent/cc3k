module subject;

void Subject::attach(Observer *o){
    observers.emplace_back(o);
}
