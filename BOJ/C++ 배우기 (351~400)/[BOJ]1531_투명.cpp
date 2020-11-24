// 2020.11.24 (화) BOJ 1531.투명
#include <iostream>

int main() {
    int N, M, x_l, x_r, y_l, y_r, cnt = 0;
    int picture[101][101] = {0,};
    
    std::cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        std::cin >> x_l >> y_l >> x_r >> y_r;
        for (int x = x_l; x <= x_r; ++x) {
            for (int y = y_l; y <= y_r; ++y) {
                picture[x][y]++;
            }
        }
    }
    for (int i = 1; i <= 100; ++i) {
        for (int j = 1; j <= 100; ++j) {
            if (picture[i][j] > M) cnt++;
        }
    }
    std::cout << cnt;

    return 0;
}