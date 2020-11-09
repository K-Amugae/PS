#include <iostream>

int main() {
    short A, sum = 0;
    
    for (int i = 0; i < 5; ++i) {
        std::cin >> A;
        sum += A;
    }
    std::cout << sum;
    
    return 0;
}