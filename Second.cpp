#include<iostream>
using namespace std;
int main(){
    int columns,rows;
    char ch;
    cout<<"Enter you expected columns number ? : ";
    cin>>columns;
    cout<<"Enter your expected rows list ? : ";
    cin>>rows;
    cout<<"which kind of chararcter you want ? : ";
    cin>>ch;
    for(int i=0;i<=columns;i++){
        for(int j=0;j<=rows;j++){
            cout<<ch<<' ';
        }   
        cout<<"\n";
    }

}