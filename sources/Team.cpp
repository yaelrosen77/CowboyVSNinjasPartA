#include "Team.hpp"
using namespace ariel; 

Team :: Team(Character* leader){
    this->leader = leader;
}

void Team :: add(Character* mate){
    return;
}

void Team :: attack(Team* enemies){
    return;
}

int Team :: stillAlive(){
    return 0;
}

void Team :: print() const{
    return;
}

Team :: ~Team(){}

void Team2 :: add(Character*mate){
    return;
}

void SmartTeam :: add(Character*mate){
    return;
}