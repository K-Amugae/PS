#include <iostream>

int main() {
    int N, cnt = 0;
    std::cin >> N;
    for (int i = 1; i*i < N; ++i) {
        if ((N % i == 0) && ((N / i + i) % 2 == 0)) cnt++;
    }
    std::cout << cnt;
    
    return 0;
}