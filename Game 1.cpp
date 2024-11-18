#include <iostream>
#include <memory> // for smart pointers
#include <string>
#include "Warrior.h"
#include "Mage.h"
#include "Archer.h"
#include "Cleric.h"

// Function to display the welcome message and game intro
void displayWelcomeMessage() {
    std::cout << "Welcome to Fantasy Kingdom Exploration!\n";  // displays the game title
    std::cout << "You wake up in a cozy cabin near a small town.\n";  // gives the player context about their surroundings
    std::cout << "You don't remember how you got here, but it feels familiar.\n";  // adds mystery and intrigue to the intro
    std::cout << "As you shake off the sleepiness, you have two choices:\n";  // introduces the first player decision
    std::cout << "1) Walk to the table to check out some books.\n";  // first option for the player
    std::cout << "2) Head outside to explore the world.\n\n";  // second option for the player
}

// Function to display and handle the player's choice to read books or go outside
void readBooks(bool& outside) {  // outside is passed by reference so it can be modified within this function
    char firstChoice;  // variable to store player's choice for initial decision
    std::cout << "What will you do?\n";  // prompts the player for their action
    std::cout << "1) Walk to the table to check out some books.\n";  // first option to interact with the books
    std::cout << "2) Head outside to explore the world.\n";  // second option to leave the house
    std::cout << "Enter your choice (1 or 2): ";  // asks the player for input
    std::cin >> firstChoice;  // reads the player's input

    if (firstChoice == '2') {  // if the player chooses to go outside
        outside = true;  // set the outside flag to true so the game continues outside
        return;  // exit the function and proceed with the next part of the game
    }
    // Continue with reading books if the player chooses option 1
    char bookChoice;  // variable to store player's choice for book selection
    do {  // loop for reading books until the player decides to go outside
        std::cout << "\nYou approach the table and see four options:\n";  // describes the books on the table
        std::cout << "a) 'Art of Swordsmanship'\n";  // book choice 1
        std::cout << "b) 'History of Magic'\n";  // book choice 2
        std::cout << "c) 'Basics of Alchemy'\n";  // book choice 3
        std::cout << "d) Go outside\n";  // option to leave the house and go outside
        std::cout << "Choose a book to read or go outside (a, b, c, d): ";  // asks the player to make a choice
        std::cin >> bookChoice;  // reads the player's book choice

        // Display the description based on player's choice
        switch (bookChoice) {  // switch statement to handle different book choices
        case 'a':  // player chose the 'Art of Swordsmanship' book
            std::cout << "\n'Art of Swordsmanship': This book covers the fundamentals of using a sword and shield effectively.\n";  // description of the book
            break;  // break the switch and return to book menu
        case 'b':  // player chose the 'History of Magic' book
            std::cout << "\n'History of Magic': An ancient tome filled with knowledge about mana control and spellcasting.\n";  // description of the book
            break;  // break the switch and return to book menu
        case 'c':  // player chose the 'Basics of Alchemy' book
            std::cout << "\n'Basics of Alchemy': A beginner's guide to potion-making and understanding mystical herbs.\n";  // description of the book
            break;  // break the switch and return to book menu
        case 'd':  // player chose to go outside
            std::cout << "\nYou chose to go outside.\n";  // notify the player they are going outside
            outside = true;  // set the outside flag to true
            return;  // exit the function and continue the game outside
        default:  // handles invalid input
            std::cout << "\nInvalid choice. Please choose a valid option.\n";  // inform the player of invalid input
            continue;  // loop back to ask again for a valid choice
        }

        // After reading a book, ask if the player wants to read another or go outside
        char anotherChoice;  // variable to store player's choice for next action
        std::cout << "\nWould you like to read another book or go outside?\n";  // prompt the player for the next step
        std::cout << "e) Read another book\n";  // option to read another book
        std::cout << "f) Go outside\n";  // option to leave and go outside
        std::cout << "Enter your choice (e or f): ";  // asks the player for input
        std::cin >> anotherChoice;  // reads the player's input

        if (anotherChoice == 'f') {  // if the player chooses to go outside
            std::cout << "\nYou chose to go outside.\n";  // notify the player they are going outside
            outside = true;  // set the outside flag to true
            return;  // exit the function and continue the game outside
        }
        else if (anotherChoice != 'e') {  // if the input is invalid
            std::cout << "Invalid option! Try again.\n";  // prompt the player to try again
        }

    } while (true);  // loop until valid input is given
}

// Function for the player to walk outside and interact with the guard
void goOutside() {
    // Player goes outside and spots a nearby town
    std::cout << "\nYou step outside and spot a town nearby. You decide to walk towards it.\n";  // describe the outside scene
    std::cout << "You arrive at the gate of the town where a guard stands.\n";  // introduce the guard

    // Options for the player at the gate
    char gateChoice;  // variable to store the player's choice at the gate
    std::cout << "\nAt the gate, you have two options:\n";  // explain the choices
    std::cout << "1) Walk to the gate and talk to the guard.\n";  // option to talk to the guard
    std::cout << "2) Walk around and look for something of interest.\n";  // option to explore
    std::cout << "Enter your choice (1 or 2): ";  // ask for input
    std::cin >> gateChoice;  // read the player's choice

    if (gateChoice == '2') {  // if the player chooses to walk around
        std::cout << "\nYou decide to walk around but find nothing of interest.\n";  // describe the result
        std::cout << "You walk back and decide to talk to the guard.\n";  // guide the player back to the guard
    }

    // Now player talks to the guard
    std::cout << "\nYou approach the guard.\n";  // describe the player's action
    std::cout << "The guard greets you: 'Hey there, welcome to Dawn-Vault. I don't recognize you... are you a traveling adventurer or a merchant perhaps?'\n";  // the guard's greeting

    // Player's response to the guard
    char guardChoice;  // variable to store the player's response to the guard
    std::cout << "\nWhat do you say?\n";  // prompt for the player's response
    std::cout << "1) 'a merchant... I don’t think I’m a merchant.'\n";  // response option 1
    std::cout << "2) 'Im not registered yet, but I would like to.'\n";  // response option 2
    std::cout << "Enter your choice (1 or 2): ";  // ask for input
    std::cin >> guardChoice;  // read the player's input

    // Respond based on player's choice
    if (guardChoice == '1') {  // if the player chose response 1
        std::cout << "\nGuard: 'Makes sense, you have no merchandise. You must be an adventurer looking for work. The guild hall is in the center of town.'\n";  // the guard's response
    }
    else if (guardChoice == '2') {  // if the player chose response 2
        std::cout << "\nGuard: 'Alright then. The guildhall is in the center of town, past the market.'\n";  // the guard's response
    }
    else {  // handle invalid input
        std::cout << "Invalid choice.\n";  // notify the player of invalid input
    }

    // Now proceed to the next part: walking to the town center
    std::cout << "\nYou walk towards the center of town and pass by the market area with lots of shops.\n";  // describe the town's market
    std::cout << "You have two choices:\n";  // introduce the next choices
    std::cout << "1) Walk to the shops.\n";  // option to go to the shops
    std::cout << "2) Go directly into the guild hall.\n";  // option to go to the guild hall
    std::cout << "Enter your choice (1 or 2): ";  // ask for input
    std::cin >> guardChoice;  // read the player's input

    if (guardChoice == '1') {  // if the player chooses to go to the shops
        std::cout << "\nYou walk to the shops but realize you have no money to spend.\n";  // describe the result of going to the shops
        std::cout << "You decide to go into the guild hall instead.\n";  // guide the player to the guild hall
    }

    std::cout << "\nYou enter the guild hall.\n";  // describe the player entering the guild hall
    std::cout << "Attendant: 'Hello there, welcome! What brings you here?'\n";  // the attendant's greeting

    // Ask the player for their reason for entering the guild hall
    std::cout << "\nWhat would you like to do?\n";  // prompt the player for their choice
    std::cout << "1) Register to be an adventurer.\n";  // option to register
    std::cout << "2) Find work.\n";  // option to find work
    std::cout << "Enter your choice (1 or 2): ";  // ask for input
    std::cin >> guardChoice;  // read the player's input

    if (guardChoice == '1') {  // if the player chooses to register as an adventurer
        std::cout << "\nAttendant: 'Excellent! Let’s get the paperwork started.'\n";  // attendant's response
        std::string name, classChoice;  // variables for player's name and class choice
        std::cout << "Please enter your name: ";  // ask for the player's name
        std::cin >> name;  // read the player's name
        std::cout << "\nNow, choose your class:\n";  // prompt for class choice
        std::cout << "1) Warrior\n";  // Warrior class option
        std::cout << "2) Mage\n";  // Mage class option
        std::cout << "3) Archer\n";  // Archer class option
        std::cout << "4) Cleric\n";  // Cleric class option
        std::cout << "Enter your choice (1, 2, 3, or 4): ";  // ask for input
        std::cin >> guardChoice;  // read the player's class choice

        // Assign class based on player's choice
        switch (guardChoice) {  // switch statement for class selection
        case '1': classChoice = "Warrior"; break;  // if Warrior is chosen
        case '2': classChoice = "Mage"; break;  // if Mage is chosen
        case '3': classChoice = "Archer"; break;  // if Archer is chosen
        case '4': classChoice = "Cleric"; break;  // if Cleric is chosen
        default:
            std::cout << "Invalid choice! Please choose a valid class.\n";  // handle invalid class choice
            return;  // exit the function if invalid choice
        }

        std::cout << "\nThank you, " << name << "! You have registered as a " << classChoice << ". Welcome to the guild!\n";  // confirm registration
    }
    else if (guardChoice == '2') {  // if the player chooses to find work
        std::cout << "\nAttendant: 'Well, you’ll need to register first. Let’s get the paperwork started.'\n";  // inform the player they need to register
        std::string name, classChoice;  // variables for name and class choice
        std::cout << "Please enter your name: ";  // ask for the player's name
        std::cin >> name;  // read the player's name

        // Same class selection process as the first option
        std::cout << "\nNow, choose your class:\n";  // prompt for class choice
        std::cout << "1) Warrior\n";  // Warrior class option
        std::cout << "2) Mage\n";  // Mage class option
        std::cout << "3) Archer\n";  // Archer class option
        std::cout << "4) Cleric\n";  // Cleric class option
        std::cout << "Enter your choice (1, 2, 3, or 4): ";  // asks for input
        std::cin >> guardChoice;  // read the player's class choice

        // Assign class based on player's choice
        switch (guardChoice) {  // switch statement for class selection
        case '1': classChoice = "Warrior"; break;  // if Warrior is chosen
        case '2': classChoice = "Mage"; break;  // if Mage is chosen
        case '3': classChoice = "Archer"; break;  // if Archer is chosen
        case '4': classChoice = "Cleric"; break;  // if Cleric is chosen
        default:
            std::cout << "Invalid choice! Please choose a valid class.\n";  // handle invalid class choice
            return;  // exit the function if invalid choice
        }

        std::cout << "\nThank you, " << name << "! You have registered as a " << classChoice << ". Welcome to the guild!\n";  // confirm registration
    }
    else {
        std::cout << "Invalid choice.\n";  // handle invalid input for guild hall options
    }
}

// Main function to control the flow of the game
int main() {
    bool outside = false;  // flag to check if the player has chosen to go outside
    displayWelcomeMessage();  // display the welcome message and game intro
    readBooks(outside);  // prompt the player to either read books or go outside

    if (outside) {  // if the player chose to go outside
        goOutside();  // proceed to the next part of the game outside
    }

    return 0;  // end the game
}