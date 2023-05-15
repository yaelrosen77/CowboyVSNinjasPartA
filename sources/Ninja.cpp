#include "Ninja.hpp"
using namespace ariel;

void Ninja:: move(Character* enemy){
    return;
}

void Ninja:: slash(Character* enemy){
    return;
}

Ninja :: Ninja(Point& location, string& name):
    Character(location,name){}

YoungNinja :: YoungNinja(Point& location, string& name):Ninja(location,name){
    speed = 14;
    hitPoints_ = 100;
}

TrainedNinja :: TrainedNinja(Point& location, string& name):Ninja(location,name){
    speed = 12;
    hitPoints_ = 120;
}

OldNinja :: OldNinja(Point& location, string& name):Ninja(location,name){
    speed = 8;
    hitPoints_ = 150;
}