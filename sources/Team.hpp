#pragma once
#include <iostream>
#include <vector>
using namespace std;

#include "Point.hpp"
#include "Character.hpp"
#include "Ninja.hpp"
#include "Cowboy.hpp"

namespace ariel{
    class Team{
        vector <Character*> warriors();
        Character* leader;

        public:
            Team(Character* leader);
            virtual void add(Character* mate);
            void attack(Team* enemies);
            int stillAlive();
            void print() const;
            ~Team();
    };

    class Team2 : public Team{
        void add(Character* mate) override;
    };

    class SmartTeam : public Team{
        void add(Character* mate) override;
    };
    
    class Team1{

    };

    class SmartTeam{

    };

}