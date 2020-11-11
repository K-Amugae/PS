#include <iostream>

int main() {
    int t, s, n, q, p, cost;
    std::cin >> t;
    for (int i = 0; i < t; ++i) {
        std::cin >> s >> n;
        cost = s;
        for (int j = 0; j < n; ++j) {
            std::cin >> q >> p;
            cost += q*p;
        }
        std::cout << cost << '\n';
    }

    return 0;
}