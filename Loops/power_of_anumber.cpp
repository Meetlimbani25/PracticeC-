#include <iostream>
using namespace std;

int main()
{
    int base, power;
    int result = 1;
    int i = 1;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter power: ";
    cin >> power;

    while (i <= power)
    {
        result = result * base;
        i++;
    }

    cout << "Answer = " << result;

    return 0;
}