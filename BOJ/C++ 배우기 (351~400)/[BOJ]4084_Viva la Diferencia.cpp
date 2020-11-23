// 2020.11.23 (월) - 4084. Viva la Diferencia
#include <iostream>

int main() {
    int a, b, c, d, i = 0;
    
    while(1) {
        std::cin >> a >> b >> c >> d;
        if (a == 0 && b == 0 && c == 0 && d == 0) break;
        for (i = 0; a != b || b != c || c != d || d != a; ++i) {
            int temp_a = a, temp_b = b, temp_c = c, temp_d = d;
            a = abs(temp_a - temp_b);
            b = abs(temp_b - temp_c);
            c = abs(temp_c - temp_d);
            d = abs(temp_d - temp_a);
        }
        std::cout << i << '\n';
    }    
    return 0;
}