// 2020.11.24 (화) BOJ 5671.호텔 방 번호
#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int N, M;
    while(std::cin >> N >> M) {
        int cnt = 0;
        for (int i = N; i <= M; ++i) {
            std::string temp = std::to_string(i);
            std::sort(temp.begin(), temp.end());
            int len = temp.length();
            for (int j = 0; j < len; ++j) {
                if (j == len-1) cnt++;
                if (temp[j] == temp[j+1]) break;
            }
        }
        std::cout << cnt << '\n';
    }
    
    return 0;
}