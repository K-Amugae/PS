#include <iostream>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
    int N = 0, K = 0;
    int arr[5000000];
    std::cin >> N >> K;
    for (int i = 0; i < N; ++i) std::cin >> arr[i];
    
    std::sort(arr, arr + N);
    std::cout << arr[K-1];
    
    return 0;
}
