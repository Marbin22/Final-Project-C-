#include "Warrior.h"
#include <iostream>

Warrior::Warrior(const std::string& name) : Character(name) { // constructor sets up the Warrior's initial stats
    health = 120; // warriors have higher health
    stamina = 80; // and more stamina
    skills.push_back("Shield Block"); // add a skill to the Warrior
}

void Warrior::attack() { // implement the Warrior's attack action
    std::cout << name << " swings their sword mightily!\n";
}

void Warrior::specialAbility() { // implement the Warrior's special ability
    std::cout << name << " raises their shield to block incoming damage!\n";
}