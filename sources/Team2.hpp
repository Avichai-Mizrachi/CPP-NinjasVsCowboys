#pragma once

#include "Character.hpp"

#include <string>
#include <iostream>
#include <cmath>

namespace ariel{
    class Team2{

        private:
            Character* (*members);
            Character* leader;
            int capacity = 10;
            int Size;

        public:
            Team2(Character *leader);
            Team2(const Team2& other);
            ~Team2();
            int stillAlive();
            void attack(Team2*); 
            void add(Character*);
            void print();
    };
}