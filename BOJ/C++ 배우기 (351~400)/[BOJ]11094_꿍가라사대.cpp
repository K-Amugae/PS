// 2020.11.26 (목) [BOJ]11094. 꿍 가라사대
#include <iostream>
#include <limits>
#include <string>

int main() {
    int N;
    std::string s = "";
    std::cin >> N;
    // 공백 인식되지 않도록 buffer 비워주기
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    for (int i = 0; i < N; ++i) {
        std::getline(std::cin, s);
        if (s.substr(0,10) == "Simon says") std::cout << s.substr(10) << '\n';
    }
    
    return 0;
}