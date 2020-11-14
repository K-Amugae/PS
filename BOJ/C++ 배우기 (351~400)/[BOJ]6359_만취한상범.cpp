#include <iostream>

int main() {
    int T = 0, n = 0, cnt = 0;
    int square[11];
    for (int i = 1; i <= 11; ++i) square[i-1] = i*i;
    
    std::cin >> T;
    for (int i = 0; i < T; ++i) {
        std::cin >> n;
        cnt = 0;
        for (int j = 0; square[j] <= n; ++j) cnt++;
        std::cout << cnt << '\n';
    }

    return 0;
}