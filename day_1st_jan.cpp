// day finder for that date
#include<iostream>
using namespace std;

int find_day(int y);

int get_cent_days(int y) {
    int cent = y / 100;
    if (cent == 0) { return 0; }
    if (cent == 1) { return 5; }
    if (cent == 2) { return 3; }
    if (cent == 3) { return 1; }
}

int aditya(int year) {
    int y = year - 1;
    y %= 400;
    int cent = get_cent_days(y);
    y %= 100;
    return find_day(y + 1);
}

int find_day(int y) {
    int year = y - 1;
    int odd_day = year;
    odd_day += year/4; // adding leap years
    odd_day -= year/100;
    odd_day += year/400;
    return (odd_day + 1) % 7;
}

void print_day(int odd_day) {
    if (odd_day == 0) { cout<<"Sunday.\n"; }
    if (odd_day == 1) { cout<<"Monday.\n"; }
    if (odd_day == 2) { cout<<"Tuesday.\n"; }
    if (odd_day == 3) { cout<<"Wednesday.\n"; }
    if (odd_day == 4) { cout<<"Thursday.\n"; }
    if (odd_day == 5) { cout<<"Friday.\n"; }
    if (odd_day == 6) { cout<<"Saturday.\n"; }
}

int main(){
    int year; cin>>year;
    int odd_day = aditya(year);
    print_day(odd_day);
}