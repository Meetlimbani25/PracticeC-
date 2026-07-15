// day finder for that date
#include<iostream>
using namespace std;

int main(){
    int x,y,radius;
    cin>>x>>y>>radius;

    int dist_sq = x*x + y*y;
    int rad_sq = radius * radius;

    if(dist_sq == rad_sq) { cout<<"On the circle.\n"; }
    else if (dist_sq < rad_sq) { cout<<"Inside circle.\n"; }
    else { cout<<"Outside the circle.\n"; }
}