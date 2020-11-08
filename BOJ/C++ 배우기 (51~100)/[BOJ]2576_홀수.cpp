#include <iostream>

int main() {
    int n, min = 101, sum = 0;
    
    for (int i = 0; i < 7; ++i) {
        std::cin >> n;
        if (n % 2) {
            sum += n;
            if (n < min) min = n;
        }
    }
    if (sum == 0) std::cout << "-1";
    else std::cout << sum << '\n' << min;
    
    return 0;
}