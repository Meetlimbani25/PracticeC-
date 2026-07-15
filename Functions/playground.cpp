#include<iostream>
using namespace std;

void yash();

void nimit(string _friend) {
    // if I come, I will come only with yash
    if (_friend == "Yash") {
        yash();
        cout<<"Hey Nimit.\n";
    }
}

void yash() {
    cout<<"Heya Yash.\n";
}

void meet() {
    cout<<"Hola Meet!\n";
}

int main() {
    nimit("Yash");
}