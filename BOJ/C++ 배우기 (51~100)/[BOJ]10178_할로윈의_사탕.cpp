#include <iostream>

int main() {
    int T, c, v;
    std::cin >> T;
    for (int i = 0; i < T; ++i) {
        std::cin >> c >> v;
        std::cout << "You get " << c/v << " piece(s) and your dad gets " << c%v << " piece(s)." << '\n';
    }
    
    return 0;
}