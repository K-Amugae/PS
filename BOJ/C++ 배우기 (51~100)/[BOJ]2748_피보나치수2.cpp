#include <iostream>

using namespace std;

int main() {
    int n = 0;
    long long fibo_2 = 0, fibo_1 = 1, fibo = 1;
    cin >> n;
    
    if (n == 0) {cout << 0; return 0;}
    if (n == 1) {cout << 1; return 0;}
    
    for (int i = 2; i <= n; i++) {
        fibo = fibo_1 + fibo_2;
        fibo_2 = fibo_1;
        fibo_1 = fibo;
    }

    cout << fibo;
    return 0;
}