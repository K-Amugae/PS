// 2020.11.19 (Thu)
#include <iostream>
#include <algorithm>

int main() {
    int Tri[45] = {0,}, sum3Tri[85185] = {0,}, T, K, idx = 0;
    int* p;
    for (int n = 1; n <= 44; ++n) {
        Tri[n] = n*(n+1)/2;
    }
    for (int i = 1; i <= 44; ++i) {
        for (int j = i; j <= 44; ++j) {
            for (int k = j; k <= 44; ++k) {
                sum3Tri[idx++] = Tri[i]+Tri[j]+Tri[k];
            }
        }
    }
    
    std::cin >> T;
    for (int i = 0; i < T; ++i) {
        std::cin >> K;
        p = std::find(sum3Tri, sum3Tri + 85185, K);
        if (p != sum3Tri + 85185) std::cout << "1\n";
        else std::cout << "0\n";
    }
    
    return 0;
}

// 3개 삼각수의 합을 미리 구해놓은 뒤 find 하여 테스트케이스 판별
// n(n+1)/2 < 1000 ==> n(n+1) < 2000
// therefore, n <= 44