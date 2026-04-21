#include <iostream>
#include <cctype> // Required for isupper() and islower()

// Function to check and display the case of a character
void checkCharacterCase(char ch) {
    if (std::isupper(ch)) {
        std::cout << "The character '" << ch << "' is UPPERCASE." << std::endl;
    } 
    else if (std::islower(ch)) {
        std::cout << "The character '" << ch << "' is lowercase." << std::endl;
    } 
    else {
        std::cout << "The character '" << ch << "' is not an alphabetic letter." << std::endl;
    }
}

int main() {
    char userInput;

    std::cout << "Enter a single character: ";
    std::cin >> userInput;

    // Call the function
    checkCharacterCase(userInput);

    return 0;
}