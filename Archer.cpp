#include "Archer.h" // include the Archer header
#include <iostream> 

Archer::Archer(const std::string& name) : Character(name) {
    health = 90; // archers have moderate health
    stamina = 100; // archers rely on stamina
    skills.push_back("Precision Shot"); // add a skill for the archer
}

void Archer::attack() { // archer's attack method
    std::cout << name << " shoots an arrow with precision!\n"; // output attack
    stamina -= 15; // reduce stamina by 15
}

void Archer::specialAbility() { // archer's special ability
    std::cout << name << " uses a rapid shot, firing multiple arrows!\n"; // output ability
    stamina -= 30; // reduce stamina by 30
}