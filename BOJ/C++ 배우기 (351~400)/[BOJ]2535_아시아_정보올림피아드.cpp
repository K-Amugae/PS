#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int N, cnt = 0;
    std::cin >> N;
    int medal[N] = {0,};
    std::vector<std::vector<int>> students(N);
    for (int i = 0; i < N; ++i) {
        int nation, num, score;
        std::cin >> nation >> num >> score;
        students[i].push_back(score);
        students[i].push_back(nation);
        students[i].push_back(num);
    }
    std::sort(students.begin(), students.end());
    std::reverse(students.begin(), students.end());
    for (int i = 0; i < N; ++i) {
        if (medal[students[i][1]-1]++ >= 2) continue;
        std::cout << students[i][1] << ' ' << students[i][2] << '\n';
        if(++cnt >= 3) break;
    }
    
    return 0;
}