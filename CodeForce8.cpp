#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> parts;
        int place = 1;
        while (n > 0) {
            int d = n % 10;
            if (d) parts.push_back(d * place);
            n /= 10;
            place *= 10;
        }
        cout << parts.size() << "\n";
        for (int i = 0; i < (int)parts.size(); ++i) {
            cout << parts[i] << (i + 1 == (int)parts.size() ? '\n' : ' ');
        }
    }
    return 0;
}
