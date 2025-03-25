module gameobject;
import <string>;
import <fstream>;
import info;


using namespace std;

Info GameObject::getInfo(){
    return info;
}

GameObject::~GameObject(){}