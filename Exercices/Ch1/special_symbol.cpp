#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    cout << ((ch >= 'A' && ch <= 'Z') ||
             (ch >= 'a' && ch <= 'z') ||
             (ch >= '0' && ch <= '9')
             ? "Not a Special Symbol"
             : "Special Symbol");

    return 0;
}