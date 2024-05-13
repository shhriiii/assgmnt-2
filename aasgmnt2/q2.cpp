#include <iostream>
#include <cmath>

int main() {
    // Define the radius of the circle
    double radius;

    // Prompt the user to enter the radius
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Calculate the area of the circle
    double area = M_PI * radius * radius;

    // Calculate the circumference of the circle
    double circumference = 2 * M_PI * radius;

    // Compare the area and circumference
    if (area > circumference) {
        std::cout << "Area is greater than circumference." << std::endl;
    } else if (area < circumference) {
        std::cout << "Circumference is greater than area." << std::endl;
    } else {
        std::cout << "Area and circumference are equal." << std::endl;
    }

    return 0;
}
