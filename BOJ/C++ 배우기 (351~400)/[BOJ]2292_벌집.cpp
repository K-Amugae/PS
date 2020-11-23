// 2020.11.23 (월) - 2292. 벌집
#include <iostream>

int main() {
    int arr[18259] = {0,};
    int N, answer = 1;
    std::cin >> N;
    
    for (int i = 1; i <= 18258; ++i) {
        arr[i] = 1 + 3*(i-1)*i;
        if (arr[i] >= N) {
            answer = i;
            break;
        }
    }

    std::cout << answer;
    
    return 0;
}

// 1 1+6 1+6+12 1+6+12+18
// 1 + 6*(n-1)*n/2 = 1 + 3*(n-1)*n