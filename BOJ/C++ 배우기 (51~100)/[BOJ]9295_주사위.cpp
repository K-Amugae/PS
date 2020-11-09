#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int T = 0, a = 0, b = 0;
    std::cin >> T;
    for (int i = 1; i <= T; ++i) {
        std::cin >> a >> b;
        std::cout << "Case " << i << ": " << a+b << '\n';
    }

    return 0;
}