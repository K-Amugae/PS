#include <iostream>

int main() {
    int N = 0, total_score = 0;
    std::cin >> N;
    int *score = new int[N];
    for (int i = 0; i < N; ++i) {
        std::cin >> score[i];
        if (score[i-1] != 0 && score[i] != 0) score[i] = score[i-1]+1;
        total_score += score[i];
    }
    std::cout << total_score;
    
    return 0;
}