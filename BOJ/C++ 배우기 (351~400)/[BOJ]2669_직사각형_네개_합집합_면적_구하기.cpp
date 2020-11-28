// 2020.11.28 (토) [BOJ]2669. 직사각형 네개의 합집합의 면적 구하기
#include <iostream>

int main() {
    int area = 0, x1, y1, x2, y2;
    int coordinate[101][101] = {{0,},};
    
    for (int i = 0; i < 4; ++i) {
        std::cin >> x1 >> y1 >> x2 >> y2;
        for (int x = x1+1; x <= x2; ++x) {
            for (int y = y1+1; y <= y2; ++y) {
                if (coordinate[x][y] == 1) continue;
                coordinate[x][y] = 1;
            }
        }
    }
    
    for (int i = 1; i <= 100; ++i) {
        for (int j = 1; j <= 100; ++j) {
            area += coordinate[i][j];
        }
    }
    std::cout << area;
    
    return 0;
}