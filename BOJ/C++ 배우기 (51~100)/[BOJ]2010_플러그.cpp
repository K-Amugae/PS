#include <iostream>

int main() {
    int N = 0, p = 0, max = 0;
    std::cin >> N;
    for (int i = 0; i < N; ++i) {
        std::cin >> p;
        max += p;
    }
    std::cout << max - (N-1);
    return 0;
}