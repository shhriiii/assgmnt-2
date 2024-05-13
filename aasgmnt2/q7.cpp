#include <iostream>

using namespace std;

int main() {
    // Declare variables to store the coordinates of the point
    double x, y;

    // Prompt the user to enter the coordinates of the point
    cout << "Enter the x-coordinate of the point: ";
    cin >> x;
    cout << "Enter the y-coordinate of the point: ";
    cin >> y;

    // Check if the point lies on the x-axis
    if (x == 0 && y != 0) {
        cout << "The point lies on the x-axis." << endl;
    }
    // Check if the point lies on the y-axis
    else if (y == 0 && x != 0) {
        cout << "The point lies on the y-axis." << endl;
    }
    // Check if the point lies at the origin
    else if (x == 0 && y == 0) {
        cout << "The point lies at the origin." << endl;
    }
    // If the point doesn't lie on any axis or at the origin
    else {
        cout << "The point does not lie on any axis or at the origin." << endl;
    }

    return 0;
}
