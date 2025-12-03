#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        int k;
        cin >> k;
        
        int num = 0;           // আমরা কোন সংখ্যা চেক করছি
        int cnt = 0;           // কয়টা ভালো সংখ্যা পেয়েছি
        
        while(cnt < k) {
            num++;                                      // পরের সংখ্যা
            if(num % 3 == 0) continue;                  // ৩ দিয়ে ভাগ যায় → খারাপ
            if(num % 10 == 3) continue;                 // শেষে ৩ → খারাপ
            cnt++;                                      // এটা ভালো সংখ্যা
        }
        
        cout << num << "\n";
    }
    return 0;
}