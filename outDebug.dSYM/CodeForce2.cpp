#include<iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    set<int> s;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    
    cout << (int)s.size() << "\n";
    
    return 0;
}