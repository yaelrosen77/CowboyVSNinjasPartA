#include "Cowboy.hpp"
using namespace ariel;

Cowboy :: Cowboy(Point& location, string& name):Character(location,name){
    Bullets_ = 6;
    hitPoints_ = 110;
}

bool Cowboy :: hasBullets(){
    return 1;
}

void Cowboy :: reload(){
    return;
}

void shoot(Character* enemy){
    return;
}

string Cowboy :: print(){
    return "";
}