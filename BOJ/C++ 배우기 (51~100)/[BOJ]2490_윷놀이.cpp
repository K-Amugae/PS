#include <iostream>

int main() {
    char yut[5] = {'D', 'C', 'B', 'A', 'E'};
    short a, b, c, d;
    
    for (int i = 0; i < 3; ++i) {
        std::cin >> a >> b >> c >> d;
        std::cout << yut[a+b+c+d] << '\n';
    }
    
    return 0;
}