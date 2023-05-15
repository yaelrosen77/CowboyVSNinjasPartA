#pragma once
#include <iostream>
using namespace std; 
#include "Character.hpp"

namespace ariel{

    class Cowboy : public Character{
        Cowboy(Point& location, string& name);
        int Bullets_;
        bool hasBullets();
        void reload();       
        void shoot(Character* enemy);
        public:
           string print() override;
    };

}