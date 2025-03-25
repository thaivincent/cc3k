export module observer;

class Subject;

class Observer{
    public:
    virtual void notify( Subject & whoNotified ) = 0; 
    virtual ~Observer() = default;
};