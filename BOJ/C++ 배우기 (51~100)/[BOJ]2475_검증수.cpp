#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int num = 0, verif_num = 0;
    for (int i = 0; i < 5; ++i) {
        std::cin >> num;
        verif_num += num*num;
    }
    std::cout << verif_num % 10;
    
    return 0;
}