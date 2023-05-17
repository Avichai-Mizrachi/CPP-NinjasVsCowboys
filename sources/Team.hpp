#pragma once

#include "Character.hpp"

#include <string>
#include <iostream>
#include <cmath>

namespace ariel{
    class Team{

        private:
            Character* (*members);
            Character* leader;
            int capacity = 10;
            int Size;

        public:
            Team(Character *leader);
            Team(const Team& other);
            ~Team();
            int stillAlive();
            void attack(Team*); 
            void add(Character*);
            void print();
    };
}