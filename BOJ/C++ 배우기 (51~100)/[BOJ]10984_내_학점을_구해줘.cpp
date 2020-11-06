#include <iostream>

int main() {
    int T, N, C, total_C;
    float G, sum;
    
    std::cin >> T;
    for (int i = 0; i < T; ++i) {
        sum = 0, total_C = 0;
        std::cin >> N;
        for (int j = 0; j < N; ++j) {
            std::cin >> C >> G;
            total_C += C;
            sum += C*G;
        }
        std::cout << std::fixed;
        std::cout.precision(1);
        std::cout << total_C << ' ' << sum / total_C << '\n';
    }
    
    return 0;
}