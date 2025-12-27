#include <iostream>
using namespace std;

int main() {
    int a, b,c;
    // Read the first two numbers (e.g., 8 and 5)
    cin >> a >> b;

    int count=0;
    for(int i = 0;i<a;i++){
        cin>>c;
        if(c>5){
            count++;
        }
    }
    cout<<count;
}   