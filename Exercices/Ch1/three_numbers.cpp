#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    cout << "Greatest = "
         << (a > b ?
             (a > c ? a : c) : (b > c ? b : c));

    return 0;
}