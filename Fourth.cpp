#include<iostream>
using namespace std;

bool distinctdigits(int x ){
    int d1=x/1000;
    int d2=(x/100)%10;
    int d3=(x/10)%10;
    int d4=x%10;
    
    return(d1 !=d2 && d1 !=d3 && d1 !=d4 &&
           d2 !=d3 && d2 != d4 &&
           d3 !=d4);
}
int main(){
    int n;
    cin>>n;
    for(int i=n+1;i<=9999;i++){
        if(distinctdigits(i)){
            cout<<i<<"\n";
            break;
        }
    }
    return 0;
    
}