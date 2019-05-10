//
// Created by jeanlee on 10/05/19.
//

#include "Skill.h"

Defense::Defense(int level): level{level} {}

// Defensas

Elude::Elude(int level):Defense{level} {}

int Elude::get_level() {
    return level;
}

Shield::Shield(int level):Defense{level} {}

int Shield::get_level() {
    return level;
}

Armor::Armor(int level):Defense{level} {}

int Armor::get_level() {
    return level;
}

//Ataques

Attack::Attack(int power):power{power} {}

Punch::Punch()(int power):Attack{power} {}

int Punch::get_power() {
    return power;
}

Saber::Saber(int power):Attack{power} {}

int Saber::get_power() {
    return power;
}

Firearm::Firearm(int power):Attack{power} {}

int Firearm::get_power() {
    return power;
}
