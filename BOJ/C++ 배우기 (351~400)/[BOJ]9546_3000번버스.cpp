#include <iostream>

int main() {
    int t, k, passengers;
    std::cin >> t;
    for (int i = 0; i < t; ++i) {
        passengers = 0;
        std::cin >> k;
        for (int j = 0; j < k; ++j) {
            passengers = passengers * 2 + 1;
        }
        std::cout << passengers << '\n';
    }
    
    return 0;
}

// i = n - (n/2 + 0.5) = n/2-0.5 = 0.5*(n-1)
// 2*i = n-1 -> n = 2i + 1
