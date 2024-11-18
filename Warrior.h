#pragma once
#include "Character.h"

class Warrior : public Character { // derived class for the Warrior character type
public:

    Warrior(const std::string& name);     // constructor to initialize the Warrior with a name

    void attack() override;  // override attack function

    void specialAbility() override;     // override special ability function (e.g., shield block)
};