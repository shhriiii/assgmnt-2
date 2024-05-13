#include <iostream>

int main() {
    // Define variables to store the input integers
    int a, b;

    // Prompt the user to enter the first integer
    std::cout << "Enter the first integer (a): ";
    std::cin >> a;

    // Prompt the user to enter the second integer
    std::cout << "Enter the second integer (b): ";
    std::cin >> b;

    // Check which number is greater
    if (a > b) {
        // If a is greater than b
        std::cout << "First number " << a << " is the largest." << std::endl;
    } else if (b > a) {
        // If b is greater than a
        std::cout << "Second number " << b << " is the largest." << std::endl;
    } else {
        // If both numbers are equal
        std::cout << "Both numbers are equal." << std::endl;
    }

    return 0;
}
