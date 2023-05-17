#pragma once

#include "Character.hpp"

#include <string>
#include <iostream>
#include <cmath>

namespace ariel{
    class SmartTeam{

        private:
            Character* (*members);
            Character* leader;
            int capacity = 10;
            int Size;

        public:
            SmartTeam(Character *leader);
            SmartTeam(const SmartTeam& other);
            ~SmartTeam();
            int stillAlive();
            void attack(SmartTeam*); 
            void add(Character*);
            void print();
    };
}