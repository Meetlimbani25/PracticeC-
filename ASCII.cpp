#include<iostream>
using namespace std;
int main(){
    int c;
    cout<<"Enter a character: ";
    cin>>c;
    if(c>=65 && c<=90)
        cout<<"The character is an uppercase letter"<<endl;
    else if(c>=97 && c<=122)
        cout<<"The character is a lowercase letter"<<endl;
    else if(c>=48 && c<=57)
        cout<<"The character is a digit"<<endl;
    else
        cout<<"The character is a special character"<<endl;
    return 0;
}