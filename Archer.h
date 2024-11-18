#pragma once 
#include "Character.h" // include the base character class

class Archer : public Character { // class for the Archer character type
public:
    Archer(const std::string& name); // constructor for Archer
    void attack() override; // overrides the attack 
    void specialAbility() override; // overrides the special ability 
};