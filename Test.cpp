#include "doctest.h"
#include "sources/Character.hpp"
#include "sources/Point.hpp"
#include "sources/Team.hpp"

#include <iostream>
#include <stdexcept>

using namespace ariel;

TEST_CASE("Point class"){
    Point p1(1,5);
    Point p2(10,50);
    Point p3(12,40);
    Point p4(8,29);
    CHECK(p1.distance(p2) == 45.8912);
    CHECK(p2.distance(p1) == 45.8912);   CHECK(p2.distance(p3) == 10.19804);
    CHECK(p1.distance(p1) == 0);
    CHECK(p1.distance(p4) == 25);
    CHECK(p4.distance(p3) == 11.7047);
    CHECK(p3.distance(p1) == 36.6879);
}

TEST_CASE("Character class"){
    Point p1(1,5);
    Point p2(10,50);
    Point p3(12,40);
    Point p4(8,29);
    OldNinja* old = new OldNinja("Old",p1);
    TrainedNinja* trained = new TrainedNinja("Trained",p2);
    YoungNinja* young = new YoungNinja("Young",p3);
    Cowboy* cowboy = new Cowboy("Cowboy",p4);
    
    CHECK(cowboy->isAlive());
    CHECK(old->isAlive());
    CHECK(trained->isAlive());
    CHECK(young->isAlive());

    CHECK(young->distance(old) == old->distance(young));
    CHECK(young->distance(old) != old->distance(cowboy));
    CHECK_THROWS(young->distance(young));
    CHECK(young->distance(old) == old->distance(young));

    CHECK(old->getHealth() > trained->getHealth());
    CHECK(trained->getHealth() > cowboy->getHealth());
    CHECK(cowboy->getHealth() > young->getHealth());
    CHECK(old->getHealth() > young->getHealth());

    CHECK(old->getSpeed() < trained->getSpeed());
    CHECK(trained->getSpeed() < young->getSpeed());
    CHECK(old->getSpeed() < young->getSpeed());
}