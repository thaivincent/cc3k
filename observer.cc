export module observer;
import subject;

export class Observer{
    public:
    virtual void notify( Subject & whoNotified ) = 0; 
    virtual ~Observer() = default;
};