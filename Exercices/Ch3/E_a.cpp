#include <bits/stdc++.h>
using namespace std;

bool is_Prime_meet(int n) {
    for(int i = 2; i < n; i++) {
        if (n % i == 0) { return false; }
    }
    return true;
}

bool is_Prime(long n) {
    if (n < 2) { return false; }
    if (n == 2) { return true; }
    if (n%2==0) { return false; }
    for(long i = 3; i <= n/i; i += 2) {
        if(n % i == 0) { return false; }
    }
    return true;
}

void solve() {
    
    // int i, j;
    long i, range = 100*1e5;
    int count = 0;

    for (i = 2; i <= range; i++)
    {
        if (is_Prime(i)) {
            // cout << i << " ";
            count++;
        }
    }
    cout<<"Total number of primes: "<<count<<'\n';
        
}

int main()
{
    solve();
    return 0;
}