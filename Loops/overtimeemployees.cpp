#include <iostream>
using namespace std;

int main()
{
    int hours, i = 1;
    float overtimePay;

    while (i <= 10)
    {
        cout << "Enter working hours of Employee " << i << ": ";
        cin >> hours;

        if (hours > 40)
            overtimePay = (hours - 40) * 12;
        else
            overtimePay = 0;

        cout << "Overtime Pay = Rs. " << overtimePay << endl << endl;

        i++;
    }

    return 0;
}