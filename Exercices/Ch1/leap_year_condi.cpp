#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter year: ";
    cin >> year;

    cout << (((year % 400 == 0) ||
             (year % 4 == 0 && year % 100 != 0))
             ? "Leap Year"
             : "Not a Leap Year");

    return 0;
}