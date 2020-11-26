// 2020.11.25 (목) [BOJ]1551. 수열의 변화
#include <stdio.h>

int main() {
    int N, K, arr[20];
    scanf("%d %d", &N, &K);
    for (int i = 0; i < N; ++i) {
        scanf("%d,", &arr[i]);
    }
    for (int j = 0; j < K; ++j) {
        for (int i = 0; i < N-1; ++i) {
            arr[i] = arr[i+1] - arr[i];
        }
        --N;
    }
    
    for (int i = 0; i < N; ++i) {
        printf("%d", arr[i]);
        if (i != N-1) printf(",");
    }
    return 0;
}