#include <bits/stdc++.h>
using namespace std;

void solve() {
    int i=1,x,y,p=1;
    cout<<"enter values of x, y:";
    cin>>x>>y;

    while(i<=y){
        p = p*x;
        i++;
    }

    cout<<p;


}

int main()
{
    solve();
    return 0;
}