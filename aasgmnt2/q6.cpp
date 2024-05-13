#include <iostream>

int main() {
    // Declare variables to store the marks of students A, B, and C
    int marksA, marksB, marksC;

    // Prompt the user to enter the marks of students A, B, and C
    std::cout << "Enter the marks of student A: ";
    std::cin >> marksA;
    std::cout << "Enter the marks of student B: ";
    std::cin >> marksB;
    std::cout << "Enter the marks of student C: ";
    std::cin >> marksC;

    // Compare the marks of students A, B, and C to find the least marks
    if (marksA <= marksB && marksA <= marksC) {
        std::cout << "Student A scored the least marks: " << marksA << std::endl;
    } else if (marksB <= marksA && marksB <= marksC) {
        std::cout << "Student B scored the least marks: " << marksB << std::endl;
    } else {
        std::cout << "Student C scored the least marks: " << marksC << std::endl;
    }

    return 0;
}
