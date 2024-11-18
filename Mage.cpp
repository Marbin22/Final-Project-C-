#include "Mage.h" // include the Mage header
#include <iostream> 

Mage::Mage(const std::string& name) : Character(name) {
    health = 80; // mages have lower health
    mana = 100; // mages have higher mana
    skills.push_back("Fireball"); // add a skill for the mage
}

void Mage::attack() { // mage's attack 
    std::cout << name << " casts a fireball!\n"; // output attack
    mana -= 10; // reduce mana by 10
}

void Mage::specialAbility() { // mage's special ability
    std::cout << name << " uses a mana shield to absorb damage!\n"; // output ability
    mana -= 20; // reduce mana by 20
}