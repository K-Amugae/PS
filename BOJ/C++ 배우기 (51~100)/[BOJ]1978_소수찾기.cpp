#include <iostream>

int main() {
    int PrimeArr[1001] = {0,};
    int N = 0, num = 0, cnt = 0;
    for (int i = 2; i <= 1000; ++i) PrimeArr[i] = i;
    for (int i = 2; i * i <= 1000; ++i) {
        if (PrimeArr[i] == 0) continue;
        for (int j = i * i; j <= 1000; j += i) PrimeArr[j] = 0;
    }

    std::cin >> N;
    for (int i = 0; i < N; ++i) {
        std::cin >> num;
        if (PrimeArr[num] != 0) cnt++;
    }
    std::cout << cnt;

    return 0;
}