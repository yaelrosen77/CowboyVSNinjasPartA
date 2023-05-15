#pragma once
#include <iostream>
using namespace std;
#include "Character.hpp"
using namespace ariel;

namespace ariel{
    class Ninja : public Character{
        protected: 
            int speed;
            void move(Character* enemy);
            void slash(Character* enemy);
        public: 
            Ninja(Point& location, string& name);
    };

    class YoungNinja : public Ninja{
        public:     
            YoungNinja(Point& location, string& name);
    };

    class TrainedNinja : public Ninja{
        public:     
            TrainedNinja(Point& location, string& name);
    };

    class OldNinja : public Ninja{
        public:     
            OldNinja(Point& location, string& name);
    };

}