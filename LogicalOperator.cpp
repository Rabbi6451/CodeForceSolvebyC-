#include<iostream>
using namespace std;
int main(){
    double temp;
    char unit;
    cout<<"******** Temperature conversion **********\n";
    cout<<"F = Fahrenheit \n";
    cout<<"C = Celsius \n";
    cin>>unit;

    if(unit == 'F'|| unit == 'f'){
        cout<<"Enter the temperature in Celsius : ";
        cin >> temp;
        temp = (1.8*temp)+32.0;
        cout<<"Temperature is : "<< temp<< "F\n";
    }
    if(unit == 'C'|| unit == 'c'){
        cout<<"Enter the temperature in fehrenheit : ";
        cin >> temp;
        temp = (temp-32)/1.8;
        cout<<"Temperature is : "<< temp<< "C\n";
    }
    else{
        cout<< "Please enter in only C/F";
    }

}