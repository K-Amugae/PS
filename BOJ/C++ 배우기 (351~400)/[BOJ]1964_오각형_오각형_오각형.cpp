// 2020.11.23 (월) - 1964. 오각형, 오각형, 오각형... 
#include <iostream>

int main() {
    long long N = 0;
    std::cin >> N;
    
    // 매 단계마다 N+1 + 2N = 3N + 1 씩 증가.
    //1 + 3*(1+2+3+ ... + N) + (1+1+...+1) = 3*N*(N+1)/2 + N
    long long answer = 1 + 3*N*(N+1)/2 + N;
    std::cout << answer%45678;
    
    return 0;
}