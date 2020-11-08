#include <iostream>

int main() {
    short n = 0;
    std::cin >> n;
    
    int *fibo = new int[n+1]{0,1};
    for (int i = 2; i <= n; ++i) 
        fibo[i] = fibo[i-1] + fibo[i-2];
    
    std::cout << fibo[n]; 
    
    return 0;
}