#include <bits/stdc++.h>
using namespace std;

void solve() {
    int fact = 1,n,i=1;
    cin >> n;
    for(i=1;i<= n;i++){
        fact *= i;
    }
      cout << fact << "\n";
}

int main()
{
    solve();
    return 0;
}