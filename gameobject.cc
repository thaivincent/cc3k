export module gameobject;
import subject;
import info;


export class GameObject: public Subject{
    Info info; 

    public:
    virtual Info getInfo() const override;
    virtual ~GameObject() = 0;
};