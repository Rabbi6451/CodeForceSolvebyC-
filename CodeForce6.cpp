#include<iostream>
using namespace std;
string division(int x){
    if(x >=1900) return "Division 1";
    else if(x >=1600)return "Division 2";
    else if(x >=1400)return "Division 3";
    else return "Division 4";
}
int main(){
    int a;
    cin>>a;
    while(a--){
        int x;
        cin>>x;
        cout<<division(x)<<"\n";
    }
}