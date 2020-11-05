#include <iostream>

int main() {
    short N;
    std::cin >> N;
    for (short star = N; star >= 1; --star) {
        for (short j = 0; j < star; ++j) std::cout << '*';
        std::cout << '\n';
    }
    return 0;
}