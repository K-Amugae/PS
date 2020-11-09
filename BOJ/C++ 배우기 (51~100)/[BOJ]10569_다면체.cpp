#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int T = 0, V = 0, E = 0;
    std::cin >> T;
    for (int i = 0; i < T; ++i) {
        std::cin >> V >> E;
        std::cout << 2+E-V << '\n';
    }

    return 0;
}