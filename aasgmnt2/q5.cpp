#include <iostream>

int main() {
    // Declare variables to store the sides of the triangle
    double side1, side2, side3;

    // Prompt the user to enter the sides of the triangle
    std::cout << "Enter the length of side 1: ";
    std::cin >> side1;
    std::cout << "Enter the length of side 2: ";
    std::cin >> side2;
    std::cout << "Enter the length of side 3: ";
    std::cin >> side3;

    // Check if the triangle is equilateral
    if (side1 == side2 && side2 == side3) {
        std::cout << "Triangle is an equilateral triangle." << std::endl;
    }
    // Check if the triangle is scalene
    else if (side1 != side2 && side2 != side3 && side1 != side3) {
        std::cout << "Triangle is a scalene triangle." << std::endl;
    }
    // If the triangle is neither equilateral nor scalene, it must be isosceles
    else {
        std::cout << "Triangle is an isosceles triangle." << std::endl;
    }

    return 0;
}
