// day finder for that date
#include<iostream>
using namespace std;

int main(){
    int x1,y1,x2, y2, x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    int slope12 = (y2 - y1) * (x3 - x2);
    int slope23 = (y3 - y2) * (x2 - x1);
    if (slope12 == slope23) { cout<<"Co-linear.\n"; }
    else { cout<<"Not co-linear.\n"; }
}