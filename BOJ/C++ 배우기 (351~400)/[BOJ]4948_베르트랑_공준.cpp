// 2020.11.29 (일) [BOJ]4948. 베르트랑 공준
#include <iostream>

#define MAX 246912
int main() {
    int n, sum;
    int PrimeArr[MAX+1] = {0, };
    for (int i = 2; i <= MAX; ++i) PrimeArr[i] = i;
    for (int i = 2; i * i <= MAX; ++i) {
        if (PrimeArr[i] == 0) continue;
        for (int j = i * i; j <= MAX; j += i) PrimeArr[j] = 0;
    }

    while(1) {
        sum = 0;
        std::cin >> n;
        if (n == 0) break;
        
        for (int i = n+1; i <= 2*n; ++i) {
            if (PrimeArr[i] != 0) sum++;
        }
        std::cout << sum << '\n';
    }
    
    return 0;
}