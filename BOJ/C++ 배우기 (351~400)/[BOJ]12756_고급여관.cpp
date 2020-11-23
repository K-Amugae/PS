// 2020.11.23 (월) - 12756. 고급 여관
#include <iostream>

int main() {
    int player_A[2], player_B[2];
    std::cin >> player_A[0] >> player_A[1] >> player_B[0] >> player_B[1];
    
    while (1) {
        player_A[1] -= player_B[0];
        player_B[1] -= player_A[0];
        if (player_A[1] <= 0 && player_B[1] <= 0) {
            std::cout << "DRAW";
            break;
        } 
        if (player_A[1] <= 0) {
            std::cout << "PLAYER B";
            break;
        }
        if (player_B[1] <= 0) {
            std::cout << "PLAYER A";
            break;
        }
    }
    
    return 0;
}