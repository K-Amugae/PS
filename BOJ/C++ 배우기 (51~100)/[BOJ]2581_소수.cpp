#include <iostream>

int main() {
    int M, N, sum = 0, min = 10001;
    std::cin >> M >> N;
    int PrimeArr[10001] = {0, };
    for (int i = 2; i <= N; ++i) PrimeArr[i] = i;
    
    for (int i = 2; i * i <= N; ++i) {
        if (PrimeArr[i] == 0) continue;
        for (int j = i * i; j <= N; j += i) PrimeArr[j] = 0;
    }
    
    for (int i = M; i <= N; ++i) {
        sum += PrimeArr[i];
        if (PrimeArr[i] != 0 && PrimeArr[i] < min) min = PrimeArr[i];
    }
    if (sum == 0) std::cout << -1;
    else std::cout << sum << '\n' << min;
    
    return 0;
}