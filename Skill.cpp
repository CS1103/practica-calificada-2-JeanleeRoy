//
// Created by jeanlee on 10/05/19.
//

#include "Skill.h"

Defense::Defense(int level) {
    this->level += level;
}

// Defensas

Elude::Elude() {

}

int Elude::defense() {
    return Defense::defense();
}

Shield::Shield() {

}

int Shield::defense() {
    return Defense::defense();
}

Armor::Armor() {

}

int Armor::defense() {
    return Defense::defense();
}

//Ataques

Attack::Attack() {

}

Punch::Punch() {

}

int Punch::attack() {
    return 0;
}


Saber::Saber() {

}

int Saber::attack() {
    return 0;
}

Firearm::Firearm() {

}

int Firearm::attack() {
    return 0;
}
