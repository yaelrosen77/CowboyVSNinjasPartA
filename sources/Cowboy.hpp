#pragma once
#include <iostream>
using namespace std; 
#include "Character.hpp"

namespace ariel{

    class Cowboy : public Character{
        int Bullets;
        bool hasBullets();
        void reload();       
        void shoot(Character* enemy);
        public:
           string print() override;
    };

}