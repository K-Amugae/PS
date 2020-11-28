// 2020.11.28 (토) [BOJ]2563. 색종이
#include <iostream>

int main() {
    int N, x1, y1, w = 10, h = 10, area = 0;
    int coordinate[100][100] = {{0,},};

    std::cin >> N;
    for (int n = 0; n < N; ++n) {
        std::cin >> x1 >> y1;
        for (int x = x1; x < x1+w; ++x) {
            for (int y = y1; y < y1+h; ++y) {
                if (coordinate[x][y] == 1) continue;
                coordinate[x][y] = 1;
            }
        }
    }
    
    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < 100; ++j) {
            area += coordinate[i][j];
        }
    }
    std::cout << area;

    return 0;
}