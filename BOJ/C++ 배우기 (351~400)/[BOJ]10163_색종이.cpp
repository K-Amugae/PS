// 2020.11.28 (토) [BOJ]10163. 색종이
#include <iostream>

int main() {
    int N, x1, y1, w, h;
    int coordinate[101][101] = {{0,},}; // 색종이 숫자로 채우기
    int colored_paper[101] = {0,};
    std::cin >> N;
    for (int n = 1; n <= N; ++n) {
        std::cin >> x1 >> y1 >> w >> h;
        for (int x = x1; x < x1+w; ++x) {
            for (int y = y1; y < y1+h; ++y) {
                coordinate[x][y] = n;
            }
        }
    }

    for (int n = 1; n <= N; ++n) {
        for (int i = 0; i < 101; ++i) {
            for (int j = 0; j < 101; ++j) {
                if (coordinate[i][j] == n) colored_paper[n]++;
            }
        }
    }
    
    for (int i = 1; i <= N; ++i) std::cout << colored_paper[i] << '\n';

    return 0;
}