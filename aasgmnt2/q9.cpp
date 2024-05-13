#include <iostream>

int main() {
    // Declare a variable to store the input character
    char ch;

    // Prompt the user to enter a character
    std::cout << "Enter a character: ";
    std::cin >> ch;

    // Check if the character is an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        std::cout << "The character '" << ch << "' is an alphabet." << std::endl;
    }
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9') {
        std::cout << "The character '" << ch << "' is a digit." << std::endl;
    }
    // If the character is neither an alphabet nor a digit, it must be a special character
    else {
        std::cout << "The character '" << ch << "' is a special character." << std::endl;
    }

    return 0;
}
