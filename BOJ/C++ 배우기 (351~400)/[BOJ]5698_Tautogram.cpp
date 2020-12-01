// 2020.11.30 (월) [BOJ]5698. Tautogram
#include <iostream>

int main() {
    std::string s;
    while(1) {
        std::getline(std::cin, s);
        if (s == "*") break;
        // s 돌면서 앞글자 검사 - 이전 단어 앞글자와 비교
        char isTauto = 'Y', pre = toupper(s[0]);
        for (int i = 0; i < (int)s.length(); ++i) {
            if (s[i] == ' ' && toupper(s[i+1]) != pre) {
                isTauto = 'N';
                break;
            }
        }
        std::cout << isTauto << '\n';
    }

    return 0;
}