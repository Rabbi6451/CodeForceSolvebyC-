#include <iostream>
using namespace std;

int main() {
    int a;
    int sum=0;
    int result = 0;
    cin >>a;
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        sum+=x;
        result = sum/4;
    }
    cout<<result;
}