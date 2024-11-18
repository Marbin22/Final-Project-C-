#include "Cleric.h" 
#include <iostream> 

Cleric::Cleric(const std::string& name) : Character(name) {
    health = 100; // clerics have balanced health
    mana = 80; // clerics rely on mana for healing
    skills.push_back("Healing Light"); // add a skill for the cleric
}

void Cleric::attack() { // cleric's attack method
    std::cout << name << " strikes with a holy tome!\n"; // output attack
    mana -= 5; // reduce mana by 5
}

void Cleric::specialAbility() { // cleric's special ability
    std::cout << name << " heals their allies with divine light!\n"; // output ability
    mana -= 25; // reduce mana by 25
}