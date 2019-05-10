//
// Created by jeanlee on 10/05/19.
//

#include "Fighter.h"

int Fighter::attack() {
    return 0;
}

int Fighter::defense() {
    return 0;
}

int BruceLee::attack() {
    return Fighter::attack();
}

int BruceLee::defense() {
    return Fighter::defense();
}

int ChuckNorris::attack() {
    return Fighter::attack();
}

int ChuckNorris::defense() {
    return Fighter::defense();
}

int JasonStaham::attack() {
    return Fighter::attack();
}

int JasonStaham::defense() {
    return Fighter::defense();
}
