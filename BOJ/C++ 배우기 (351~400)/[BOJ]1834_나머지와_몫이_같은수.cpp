#include <iostream>

int main() {
	// (1 <= N <= 2,000,000), overflow 방지 위해 변수형 long long (8bytes)으로 지정
    long long N = 0;
    
    // A = QN + Q = Q(N+1) (0 <= Q <= N-1)
    // Therefore, sum of A is
    // (1+2+...+N-1)*(N+1) = N*(N-1)*(N+1)/2 = N*(N^2-1)/2
    std::cin >> N;
    std::cout << N*(N*N-1)/2;
    
    return 0;
}