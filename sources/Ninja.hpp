#pragma once
#include <iostream>
using namespace std;
#include "Character.hpp"
using namespace ariel;

namespace ariel{
    class Ninja : public Character{
        const int speed;
        void move(Character* enemy);
        void slash(Character* enemy);
    };

    class YoungNinja : public Ninja{
        public:     
            YoungNinja();
    };

    class TrainedNinja : public Ninja{
        public:     
            TrainedNinja();
    };

    class OldNinja : public Ninja{
        public:     
            OldNinja();
    };

}