#include <iostream>

int main() {
    int n = 0;
    long long sum = 0;
    std::cin >> n;
    int x[n] = {0, };
    
    for (int i = 0; i < n; ++i) {
        std::cin >> x[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            sum += abs(x[i]-x[j]);
        }
    }
    std::cout << sum*2;

    return 0;
}