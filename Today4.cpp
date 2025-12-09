#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;                    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i]; 
    k %= n;                          
    rotate(a.begin(), a.end() - k, a.end()); 

    for (int x : a) cout << x << " "; 
    cout << "\n";
    return 0;
}
