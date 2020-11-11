#include <iostream>

int main() {
    int N = 0, factorial = 1;
    std::cin >> N;
    for (int i = 1; i <= N; ++i) {
        factorial *= i;
    }
    std::cout << factorial;
    
    return 0;
}