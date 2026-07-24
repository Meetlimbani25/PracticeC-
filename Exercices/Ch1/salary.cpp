#include <iostream>
using namespace std;

int main()
{
    float sal;

    cout << "Enter the salary: ";
    cin >> sal;

    cout << ((sal < 40000 && sal > 25000) ? "Manager" :
            ((sal < 25000 && sal > 15000) ? "Accountant" : "Clerk"));

    return 0;
}