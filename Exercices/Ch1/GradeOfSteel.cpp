#include<iostream>
using namespace std;
int main(){
    int hardness, tensileStrength;
    float carbonContent;
    cout<<"Enter the hardness of steel: ";
    cin>>hardness;
    cout<<"Enter the tensile strength of steel: ";
    cin>>tensileStrength;
    cout<<"Enter the carbon content of steel: ";
    cin>>carbonContent;
    if(hardness > 50 && tensileStrength > 5600 && carbonContent > 0.7){
        cout<<"Grade of steel is 10"<<endl;
    }
    else if(hardness > 50 && tensileStrength > 5600){
        cout<<"Grade of steel is 9"<<endl;
    }
    else if(tensileStrength > 5600 && carbonContent > 0.7){
        cout<<"Grade of steel is 8"<<endl;
    }
    else if(hardness > 50 && carbonContent > 0.7){
        cout<<"Grade of steel is 7"<<endl;
    }
    else if(hardness > 50 || tensileStrength > 5600 || carbonContent > 0.7){
        cout<<"Grade of steel is 6"<<endl;
    }
    else{
        cout<<"Grade of steel is 5"<<endl;
    }
}