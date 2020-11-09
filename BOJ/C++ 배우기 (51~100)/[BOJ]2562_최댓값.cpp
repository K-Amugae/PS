#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int num, max = 0, max_idx = 0;
    for (int i = 1; i <= 9; ++i) {
        std::cin >> num;
        if (num > max) max = num, max_idx = i;
    }
    
    std::cout << max << '\n' << max_idx;
    
    return 0;
}