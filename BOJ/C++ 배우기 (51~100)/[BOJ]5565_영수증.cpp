#include <iostream>

int main() {
    int total_cost, cost;
    std::cin >> total_cost;
    for (short i = 0; i < 9; ++i) std::cin >> cost, total_cost -= cost;

    std::cout << total_cost;
    
    return 0;
}