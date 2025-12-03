#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int a[55];
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    int kth_score = a[k];    
    int count = 0;
    
    for(int i = 1; i <= n; i++) {
        if(a[i] >= kth_score && a[i] > 0) {
            count++;
        }
    }
    
    cout << count << "\n";
    return 0;
}