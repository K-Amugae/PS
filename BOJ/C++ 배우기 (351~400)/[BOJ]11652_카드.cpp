#include <iostream>
#include <algorithm>

int main() {
    int N = 0, cnt = 1, max_cnt = 1;
    long long cards[100000], answer;
    std::cin >> N;
    for (int i = 0; i < N; ++i)
        std::cin >> cards[i];
        
    std::sort(cards, cards + N);
    answer = cards[0];
    for (int i = 1; i < N; ++i) {
        if (cards[i] == cards[i-1]) cnt++;
        else cnt = 1;
        if (cnt > max_cnt) {
            answer = cards[i];
            max_cnt = cnt;
        }
    }

    std::cout << answer;    
    return 0;
}