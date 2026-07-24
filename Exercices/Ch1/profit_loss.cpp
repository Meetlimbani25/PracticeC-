#include <bits/stdc++.h>
// #include<stdio.h>
// #include<conio.h>
using namespace std;

int main() {
    int cost_price, sell_price;
    cout<<"Enter the Cost price & Sell Price.\n";
    cin>>cost_price>>sell_price;
    if (sell_price > cost_price) {
        cout<<"Profit: "<<(sell_price - cost_price)<<"\n";
    } else if (sell_price == cost_price) {
        cout<<"No profit no loss.\n";
    } else {
        cout<<"Loss: "<<(cost_price - sell_price)<<'\n';
    }
}