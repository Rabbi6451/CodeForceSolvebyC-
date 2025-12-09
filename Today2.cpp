#include<iostream>
using namespace std;
int main(){
    int a;
    int i;
    int sum=0;
    cin >>a;
    for(i=1;i<=a;i=i+2){
        sum=sum+i;
    }
    cout<<sum;
}