#include "Ninja.hpp"
using namespace ariel;

void Ninja:: move(Character* enemy){
    return;
}
void Ninja:: slash(Character* enemy){
    return;
}
string Ninja::print(){
    return name_;    
}
Ninja :: Ninja(string name, Point location):
    Character(name, location){}

YoungNinja :: YoungNinja(string name, Point location):Ninja(name,location){
    speed = 14;
    hitPoints_ = 100;
}
TrainedNinja :: TrainedNinja(string name, Point location):Ninja(name,location){
    speed = 12;
    hitPoints_ = 120;
}
OldNinja :: OldNinja(string name, Point location):Ninja(name,location){
    speed = 8;
    hitPoints_ = 150;
}