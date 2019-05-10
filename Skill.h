//
// Created by jeanlee on 10/05/19.
//

#ifndef PC2_SKILL_H
#define PC2_SKILL_H

// Defensa

class Defense{
protected:
    int level;
public:
    explicit Defense(int level);
    virtual int get_level() = 0;
};

class Elude : public Defense{
public:
    explicit Elude(int level);
    int get_level() override ;
};

class Shield : public Defense{
public:
    explicit Shield(int level);
    int get_level() override ;
};

class Armor : public Defense{
public:
    explicit Armor(int level);
    int get_level() override ;
};

//Ataque

class Attack{
protected:
    int power;
public:
    explicit Attack(int power);
    virtual int get_power() = 0;
};

class Punch : public Attack{
public:
    explicit Punch(int power);
    int get_power() override ;
};

class Saber : public Attack{
public:
    explicit Saber(int power);
    int get_power() override ;
};

class Firearm : public Attack{
public:
    explicit Firearm(int power);
    int get_power() override ;
};




#endif //PC2_SKILL_H
