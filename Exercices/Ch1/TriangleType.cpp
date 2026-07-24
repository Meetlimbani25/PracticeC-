#include<iostream>
using namespace std;
int main() {
    int side1, side2, side3, angle1, angle2, angle3;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    if (side1 == side2 == side3) {
        cout << "The triangle is equilateral." << endl;
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        cout << "The triangle is isosceles." << endl;
    } 
    else if ((side1 * side1 + side2 * side2 == side3 * side3) || (side1 * side1 + side3 * side3 == side2 * side2) || (side2 * side2 + side3 * side3 == side1 * side1)) {
        cout << "The triangle is a right-angled triangle." << endl;
    }
    else {
        cout << "The triangle is scalene." << endl;
    }
    return 0;
}