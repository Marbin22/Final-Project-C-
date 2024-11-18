#pragma once 
#include <string>
#include <vector>

class Character {// base class for all characters in the game
protected:
    std::string name;      // Character's name
    int level;             // Character's level
    int health;            // Health points
    int mana;              // Mana points (for magic)
    int stamina;           // Stamina points (for physical actions)
    std::vector<std::string> skills; // List of character skills

public:
    Character(const std::string& name);

    virtual ~Character() = default;

    virtual void attack() = 0; // pure virtual functions to be implemented by derived classes
    virtual void specialAbility() = 0;

    void displayStats() const; // function to display character stats

    void heal(int amount); // function to heal the character
};