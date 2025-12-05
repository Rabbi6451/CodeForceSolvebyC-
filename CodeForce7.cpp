#include<iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int diffDays = min(a, b);
    int sameDays = (max(a, b) - diffDays) / 2;
    cout << diffDays << " " << sameDays << "\n";
    return 0;
}
