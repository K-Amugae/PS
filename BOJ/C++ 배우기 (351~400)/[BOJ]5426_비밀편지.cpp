// 2020.11.30 (월) [BOJ]5426.비밀 편지
#include <iostream>
#include <math.h>

int main() {
    int T;
    std::string s;
        
    std::cin >> T;
    for (int i = 0; i < T; ++i) {
        std::cin >> s;
        int len = std::sqrt((int)s.length());
        char letter[len][len];
        for (int j = 0; j < len; ++j) {
            for (int k = 0; k < len; ++k) {
                letter[j][k] = s[j*len + k];
            }
        }
        for (int j = len-1; j >= 0; --j) {
            for (int k = 0; k < len; ++k) {
                std::cout << letter[k][j];
            }
        }
        std::cout << '\n';
    }
    
    return 0;
}