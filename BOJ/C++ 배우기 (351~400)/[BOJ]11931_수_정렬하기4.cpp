// 2020.11.25 (수) [BOJ]11931.수 정렬하기 4
#include <iostream>
#include <algorithm>

int main() {
    int N = 0;
    int arr[1000000] = {0,};
    
    std::cin >> N;
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }
    std::sort(arr, arr+N, std::greater<int>());
    for (int i = 0; i < N; ++i)
        std::cout << arr[i] << '\n';
        
    return 0;
}