//
// Created by jeanlee on 10/05/19.
//

#include "Fighter.h"

void Fighter::ataque(char i) {
    switch (i){
        case 'P':
            Attack* ataque = new Punch(1);
            ataques.push_back(ataque);
            break;
        case 'S':
            Attack* ataque1 = new Saber(5);
            ataques.push_back(ataque1);
            break;
        case 'F':
            Attack* ataque2 = new Firearm(10);
            ataques.push_back(ataque2);
            break;
    }
}

int Fighter::defensa(int i) {
    switch (i){
        case 'P':
            Defense* defensa = new Elude(1);
            defensas.push_back(defensa);
            break;
        case 'S':
            Defense* defensa1 = new Shield(4);
            defensas.push_back(defensa);
            break;
        case 'F':
            Defense* defensa2 = new Elude(1);
            defensas.push_back(defensa);
            break;
    }
}

int BruceLee::attack(char i) {
    ataque(i);
}

int BruceLee::defense(char i) {
    return Fighter::defense();
}

int ChuckNorris::attack(char i) {
    ataque(i);
}

int ChuckNorris::defense(char i) {
    return Fighter::defense();
}

int JasonStaham::attack(char i) {
    ataque(i);
}

int JasonStaham::defense(char i) {
    return Fighter::defense();
}
