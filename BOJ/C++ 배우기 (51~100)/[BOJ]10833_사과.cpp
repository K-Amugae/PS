#include <iostream>

int main() {
    int N, students, apples, answer = 0;
    std::cin >> N;
    for (int i = 0; i < N; ++i) {
        std::cin >> students >> apples;
        answer += apples % students;
    }
    std::cout << answer;

    return 0;
}