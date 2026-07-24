#include<iostream>
using namespace std;
int main(){
    int days;
    cout<<"Enter the number of late days for returning a book : ";
    cin>>days;
    if(days<=5)
        cout<<"fine is 50 paise"<<endl;
    else if(days>5 && days<=10)
        cout<<"Fine is 1 rupee"<<endl;
    else if(days>10 && days<=30)
        cout<<"Fine is 5 rupee"<<endl;
    else
        cout<<"Membership cancelled"<<endl;
}