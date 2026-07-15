#include <iostream>
using namespace std;

int main() {
    int x, min, max;

    cout << "Enter max and x: ";
    cin >> max >> x;

    (x > max) ? (max = x) : (min = x);

    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;

    return 0;
}