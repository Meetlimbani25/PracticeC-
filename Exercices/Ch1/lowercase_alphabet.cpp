#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    cout << ((ch >= 'a' && ch <= 'z') ?
            "Lowercase Alphabet" :
            "Not a Lowercase Alphabet");

    return 0;
}