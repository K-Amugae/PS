#include <iostream>
#include <algorithm>

int main() {
    int N, V, arr[1000];
    int max_selected = 0, max_cnt, cnt;
    std::cin >> N;
    for (int i = 0; i < N; ++i) {
        std::fill_n(arr, 1000, 0);
        std::cin >> V;
        for (int j = 0; j < V; ++j) {
            std::cin >> arr[j];
        }
        std::sort(arr, arr+V);
        max_selected = arr[0];
        max_cnt = 1;
        cnt = 1;
        for (int j = 1; j < V; ++j) {
            if (arr[j-1] == arr[j]) cnt++;
            else cnt = 1;
            if (cnt > max_cnt) {
                max_cnt = cnt;
                max_selected = arr[j];
            }
        }
        std::cout << max_selected << '\n';
    }

    return 0;
}