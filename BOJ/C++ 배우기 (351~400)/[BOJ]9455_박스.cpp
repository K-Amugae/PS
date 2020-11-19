#include <iostream>

int main() {
    int T, m, n, cnt, total_dist;
    bool grid[101][101] = {false, };
    
    std::cin >> T;
    for (int t = 0; t < T; ++t) {
        total_dist = 0;
        std::cin >> m >> n;
        for (int i = m; i >= 1; --i) {
            for (int j = 1; j <= n; ++j) {
                std::cin >> grid[i][j];
            }
        }
        for (int j = 1; j <= n; ++j) {
            cnt = 0;
            for (int i = 1; i <= m; ++i) {
                if (grid[i][j]) {
                    cnt++;
                    total_dist += (i - cnt);
                }
            }
        }
        std::cout << total_dist << '\n';
    }
    
    return 0;
}

// 각 열(j)의 아래부터 몇번째 1인지 cnt 확인한 뒤 현재 인덱스(i)와 거리 비교
/*
  i: 
   m     1   0   0   0
   m-1   0   0   1   0
   m-2   1   0   0   1
   ...   0   1   0   0
   1     1   0   1   0

j:       1   2  ...  n
*/