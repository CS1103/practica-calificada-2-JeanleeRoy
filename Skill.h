//
// Created by jeanlee on 10/05/19.
//

#ifndef PC2_SKILL_H
#define PC2_SKILL_H

// Defensa

class Defense{
protected:
    int level = 0;
public:
    explicit Defense(int level);
    virtual int defense() = 0;
};

class Elude : public Defense{
public:
    Elude();
    int defense() override ;
};

class Shield : public Defense{
    Shield();
    int defense() override ;
};

class Armor : public Defense{
    Armor();
    int defense() override ;
};

//Ataque

class Attack{
protected:
    int power = 0;
public:
    Attack();
    virtual int attack() = 0;
};

class Punch : public Attack{
public:
    Punch();
    int attack() override;
};

class Saber : public Attack{
public:
    Saber();
    int attack() override;
};

class Firearm : public Attack{
public:
    Firearm();
    int attack() override;
};




#endif //PC2_SKILL_H
