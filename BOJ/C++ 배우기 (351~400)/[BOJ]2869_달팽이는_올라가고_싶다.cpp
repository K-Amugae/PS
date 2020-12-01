#include <iostream>

int main() {
    // std::ios::sync_with_stdio(false);
    // std::cin.tie(NULL);
    
    int A, B, V, days = 0;
    scanf("%d %d %d", &A, &B, &V);
    
    days = (V-B)/(A-B);
    if((V-B)%(A-B)) days++;
    printf("%d", days);
    
    return 0;
}