#include <iostream>

int main() {
    // 유클리드 호제법
    int a = 0, b = 0, gcd = 0, lcm = 0;
    std::cin >> a >> b;
    int num1 = a, num2 = b;
    
    while(num1 != 0 && num2 != 0) {
        if (num1 > num2) num1 %= num2;
        else num2 %= num1;
    }
    if (num1 > num2) gcd = num1;
    else gcd = num2;
    
    lcm = a*b/gcd;
    
    std::cout << gcd << '\n' << lcm;
    
    return 0;
}