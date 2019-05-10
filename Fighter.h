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
public:
    virtual int attack();
    virtual int defense();
};

class BruceLee : public Fighter{
public:
    int attack() override ;
    int defense() override ;
};

class ChuckNorris : public Fighter{
    int attack() override ;
    int defense() override ;
};

class JasonStaham : public Fighter{
    int attack() override ;
    int defense() override ;
};

#endif //PC2_FIGHTER_H
