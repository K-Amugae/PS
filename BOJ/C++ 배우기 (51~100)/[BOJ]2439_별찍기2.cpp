#include <iostream>

int main() {
    short N;
    std::cin >> N;
    for (short star = 1; star <= N; ++star) {
        for (short j = 0; j < N-star; ++j) std::cout << ' ';
        for (short j = 0; j < star; ++j) std::cout << '*';
        std::cout << '\n';
    }
    return 0;
}