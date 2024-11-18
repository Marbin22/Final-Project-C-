#include "Character.h"
#include <iostream>

Character::Character(const std::string& name) // constructor initializes the character's name and basic stats
    : name(name), level(1), health(100), mana(50), stamina(50) {}

void Character::displayStats() const { // function to display stats
    std::cout << "Character: " << name << "\nLevel: " << level
        << "\nHealth: " << health << "\nMana: " << mana
        << "\nStamina: " << stamina << "\n\n";
}


void Character::heal(int amount) { // function to heal the character
    health += amount; // increase health by specified amount
    std::cout << name << " heals for " << amount << " points!\n";
}