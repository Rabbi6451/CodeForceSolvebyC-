#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, x;
    int a = 0, b = 0, c = 0, d = 0;  
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x == 1) a++;
        if(x == 2) b++;
        if(x == 3) c++;
        if(x == 4) d++;
    }
    
    int ans = d + c + (b + 1) / 2;     // 4s, 3s, and pairs of 2s
    
    int left = a - c;                  // remaining 1s after filling 3s
    if(left < 0) left = 0;
    
    if(b % 2 == 1) {                   // one group of 2 left
        ans++;
        if(left >= 2) left -= 2;       // use two 1s with it
    }
    
    ans += (left + 3) / 4;             // remaining 1s: 4 per taxi
    
    cout << ans << "\n";
    return 0;
}