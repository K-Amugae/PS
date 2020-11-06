#include <iostream>

int main() {
    int A, B;
    while (std::cin >> A >> B, A != 0 || B != 0) {
        std::cout << A + B << '\n';
    }

    return 0;
}