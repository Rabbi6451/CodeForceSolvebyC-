#include<iostream>
using namespace std;
int main(){
    char ch;
    double num1;
    double num2;
    double result;
    cout<<"Enter a operator (+,-,/,*) : ";
    cin>>ch;
    cout<<"Enter num1 : ";
    cin>>num1;
    cout<<"Enter num2 : ";
    cin>>num2;
    switch(ch){
        case '+' :
        result = num1 + num2;
        cout<<"Your result is : "<<result;
        break;
        case '-' :
        result = num1 - num2;
        cout<<"You result is : "<<result;
        break;
        case '/' : 
        result = num1 / num2;
        cout<< "Your result is : "<<result;
        break;
        case '*': 
        result = num1 * num2;
        cout << "Your result is : "<< result;
        break;
        default :
        cout << "Plz Enter a valid number";
    }
}