#pragma once

#include <iostream>
#include <string>
#include <cmath>

#include "Point.hpp"

using namespace std;

namespace ariel{
    class Character{

        private:
            Point point;
            int health;
            string name;

        public:
            Character(string name,Point location);
            double distance(Character* other);
            bool isAlive();
            void hit(int damage);
            Point getLocation();
            string getName();
            int getHealth();
            void setHealth(int updated);
            virtual string print();
    };

    class Cowboy : public Character{

        private:
            int numOfBullets;

        public:
            Cowboy(string name,Point location);
            bool hasboolets();
            void reload();
            void shoot(Character* enemy);
            string print();
    };

    class Ninja : public Character{

        private:
            int speed;

        public:
            Ninja(string name,Point location);
            void move(Character*);
            void slash(Character *other);
            void setSpeed(int);
            int getSpeed();
            string print();
    };

    class OldNinja : public Ninja{
        
        public:
            OldNinja(string name,Point location);
    };

    class TrainedNinja : public Ninja{
        
        public:
            TrainedNinja(string name,Point location);
    };

    class YoungNinja : public Ninja{
        
        public:
            YoungNinja(string name,Point location);
    };
}