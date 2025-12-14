#include<iostream>
using namespace std;
int main(){
    int grade;
    cout<< "Enter a number (0 to Infinity) : ";
    cin>>grade;
    grade >=33 ? cout << "You are pass ! " : cout << "You are fail !";
    return 0;
}