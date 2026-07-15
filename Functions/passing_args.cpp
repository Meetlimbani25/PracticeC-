#include<iostream>
using namespace std;

// 1. Pass by Value
int sum(int a, int b) {
    b = 5;
    return a+b;
}

// 2. Pass by reference
int sum2(int &a, int &b) {
    b = 5;
    return a + b;
}

// 3. Pass by pointer
int main() {
    int a = 1, b = 2, c;
    c = sum(a, b); // c=3
    cout<<b<<'\n'; // 2
    c = sum2(a, b); // c = 3
    cout<<b<<'\n'; // b = 5
}