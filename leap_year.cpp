#include <bits/stdc++.h>
// #include<stdio.h>
// #include<conio.h>
using namespace std;

int main() {
    int year;
    cout<<"Enter year: ";
    cin>>year;

    if (year <= 0) { cout<<"Not a leap year.\n"; }
    if((year%4==0) && (year%100!=0) || year%400==0){
        cout<<"Leap Year.\n";
    }
    else{
        cout<<"Not aLeap Year.";
    }
    return 0;
}