//
// Created by jeanlee on 10/05/19.
//

#ifndef PC2_FIGHTER_H
#define PC2_FIGHTER_H

#include <vector>
#include <string>
#include "Skill.h"
using namespace std;

class Fighter {
protected:
    vector<Defense*> defensas;
    vector<Attack*> ataques;
    char identifica;
public:
    virtual int attack(char i) = 0;
    virtual int defense(char i) = 0;
    int ataque(char i);
    int defensa(char i);
};

class BruceLee : public Fighter{
public:
    int attack(char i) override ;
    int defense(char i) override ;
};

class ChuckNorris : public Fighter{
    int attack(char i) override ;
    int defense(char i) override ;
};

class JasonStaham : public Fighter{
    int attack(char i) override ;
    int defense(char i) override ;
};

#endif //PC2_FIGHTER_H
