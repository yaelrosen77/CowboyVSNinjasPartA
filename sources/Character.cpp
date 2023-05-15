#include "Character.hpp"
using namespace ariel;

Character :: Character(Point& location, string& name):
    location_(location),name_(name){}

void Character :: hit(int hits){
    return;
}

double Character :: distance(const Character& other) const{
    return 1;
}

string Character :: getName() const{
    return name_;
}

Point Character :: getLocation() const{
    return location_;
}

string Character:: print(){
    return;
}

bool Character :: isAlive() const{
    return true;
} 