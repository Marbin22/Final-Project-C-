#pragma once 
#include "Character.h" // include the base character class

class Mage : public Character { // class for the Mage character type
public:
    Mage(const std::string& name); // constructor for Mage
    void attack() override; // overrides the attack 
    void specialAbility() override; // overrides the special ability
};