//
// Created by jeanlee on 10/05/19.
//

#ifndef PC2_ARENA_H
#define PC2_ARENA_H

#include "Fighter.h"

using namespace std;

class Fight;
class Arena {
    vector<*Fight> peleas;
public:
    Arena();
    void run(Fighter a, Fighter b);
    vector<Fight*> get_fights();
    void load_fights(string filename);
};

class Fight{
    Fighter* a;
    Fighter* b;
    Fighter* winner;
    int score;
};
#endif //PC2_ARENA_H
