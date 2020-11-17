#include <iostream>

int main() {
    int N = 0, K = 0, cnt = 0;
    std::cin >> N >> K;
    int Eratos[N+1] = {0,0, };
    for (int i = 2; i <= N; ++i) Eratos[i] = i;
    
    for (int i = 2; i <= N; ++i) {
        if (Eratos[i] == 0) continue;
        for (int j = i; j <= N; j += i) {
            if (Eratos[j] == 0) continue;
            Eratos[j] = 0;
            if (++cnt == K) std::cout << j;
        }
    }
    
    return 0;
}