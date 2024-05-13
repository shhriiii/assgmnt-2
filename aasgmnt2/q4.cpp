#include <iostream>

int main() {
    // Declare variables to store the length and breadth of the rectangle
    double length, breadth;

    // Prompt the user to enter the length and breadth of the rectangle
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the breadth of the rectangle: ";
    std::cin >> breadth;

    // Calculate the area of the rectangle
    double area = length * breadth;

    // Calculate the perimeter of the rectangle
    double perimeter = 2 * (length + breadth);

    // Compare the area and perimeter
    if (area > perimeter) {
        std::cout << "Area is greater than perimeter." << std::endl;
    } else if (area < perimeter) {
        std::cout << "Perimeter is greater than area." << std::endl;
    } else {
        std::cout << "Area and perimeter are equal." << std::endl;
    }

    return 0;
}
