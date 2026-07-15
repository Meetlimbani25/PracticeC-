#include<iostream>
using namespace std;
int main() {
    float hoursWorked;
    cout << "Enter the number of hours taken by worker to complete the job: ";
    cin >> hoursWorked; 
    if (hoursWorked >= 2 && hoursWorked <= 3) {
        cout << "The worker is efficient." << endl;
    } else if (hoursWorked > 3 && hoursWorked <= 4) {
        cout << "The worker is orderered to improve speed" << endl;
    } else if (hoursWorked > 4 && hoursWorked <= 5) {
        cout << "The worker is given training to improve speed" << endl;
    } else if (hoursWorked > 5) {
        cout << "The worker is said to be leave the company" << endl;
    } else {
        cout << "Invalid input. Please enter a positive number of hours." << endl;
    }
return 0;
}