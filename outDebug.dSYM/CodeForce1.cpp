#include <iostream>
using namespace std;

int main() {
    int t;                    
    cin >> t;                
    
    for(int i = 0; i < t; i++) {  
        long long n;         
        cin >> n;           
        
        
        long long ways = (n - 1) / 2;
        cout << ways << "\n"; 
    }
    
    return 0;
}