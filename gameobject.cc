export module gameobject;
import subject;
import info;


export class GameObject: public Subject{
    Info info;
    GameObject * thisObj; 

    public:
    virtual Info getInfo() const override;
};