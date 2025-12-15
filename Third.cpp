#include<iostream>
using namespace std;

const int N = 1000000;
bool isPrime[N+1];

void sieve() {
    fill(isPrime, isPrime+N+1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= N; i++) {
        if (isPrime[i]) {
            for (int j = i*i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    sieve();
    cout << (isPrime[997] ? "Prime" : "Not Prime") << "\n";
    return 0;
}
