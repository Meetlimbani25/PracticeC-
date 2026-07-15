#include<iostream>
using namespace std;

// 1. Declaration
int sum(int a, int b);

int sum(int a, int b) { // 2. Definition
    return a + b;
}
int main() {
    int a = 2, b = 3;
    // 3. Calling
    cout<<sum(a,b)<<"\n"; // 5
    a = 1, b = 4;
    cout<<(a+b)<<"\n"; // 5
    a = 3, b = 5;
    cout<<(a+b)<<"\n"; // 8
}