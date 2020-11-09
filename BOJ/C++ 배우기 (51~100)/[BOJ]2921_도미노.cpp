#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int N = 0, points = 0;
    std::cin >> N;
    for (int i = 0; i <= N; i++)
        points += 3*i*(i+1)/2;
    std::cout << points;
    return 0;
}