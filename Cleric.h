#pragma once
#include "Character.h" 

class Cleric : public Character { // class for the Cleric character type
public:
    Cleric(const std::string& name); // constructor for Cleric
    void attack() override; // overrides the attack 
    void specialAbility() override; // overrides the special ability 
};