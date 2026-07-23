#include <bits/stdc++.h>
using namespace std;

void solve() {
    int hours;
    float overtime_pay;
    for(int i = 1; i <= 10; i++) {
        cout<<"Enter working hour of employees: ";
        cin>>hours;
        if (hours > 40) {
            overtime_pay = (hours - 40)  * 12;
            // cout<<overtime_pay<<"\n";
        } else {
            overtime_pay = 0;
        }
        cout<<overtime_pay<<"\n";
    }
}

int main()
{
    solve();
    return 0;
}