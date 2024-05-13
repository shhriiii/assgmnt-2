#include <iostream>

int main() {
    // Declare variable to store the year
    int year;

    // Prompt the user to enter the year
    std::cout << "Enter the year: ";
    std::cin >> year;

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}
