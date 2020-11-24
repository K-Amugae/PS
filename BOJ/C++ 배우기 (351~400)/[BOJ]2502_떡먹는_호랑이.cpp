// 2020.11.24 (화) BOJ 2502.떡 먹는 호랑이
#include <iostream>

int main() {
    int D, K, A, B;
    int fibo[30] = {0, 1, };
    for (int i = 2; i <= 29; ++i) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    std::cin >> D >> K;
    // fn = fn-1 * f2 + fn-2 * f1
    // f2 = (fn - (fn-2 * f1))/fn-1
    // 1 <= f1 <= f2 이므로 f1 = 1일때부터 1씩 증가시키며 f2가 자연수가 되는 경우 찾기    

    // K = fibo[D-1]*B + fibo[D-2]*A 
    // ==> fibo[D-2]*A = K-fibo[D-1]*B
    // ==> B = (K-fibo[D-2]*A)/fibo[D-1]
    for (A = 1; (K-fibo[D-2]*A)%fibo[D-1] != 0; ++A);
    B = (K-fibo[D-2]*A)/fibo[D-1];
    std::cout << A << '\n' << B;
    
    return 0;
}