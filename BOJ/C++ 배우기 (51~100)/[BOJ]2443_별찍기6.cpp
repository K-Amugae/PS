#include <iostream>

int main() {
    int N;
    std::cin >> N;
    for (int i = N; i >= 1; --i) {
        for (int j = 0; j < N-i; ++j) std::cout << ' ';
        for (int j = 0; j < 2*i-1; ++j) std::cout << '*';
        std::cout << '\n';
    }

    return 0;
}