// 2020.11.27 (금) [BOJ]1158. 요세푸스 문제
#include <iostream>
#include <vector>

int main() {
    int N, K, idx = 0;
    std::vector<int> v(0);    
    
    std::cin >> N >> K;
    for (int i = 1; i <= N; ++i) {
        v.push_back(i);
    }
    
    std::cout << '<';
    while(!v.empty()) {
        idx = (idx+(K-1))%N--;
        std::cout << v[idx];
        v.erase(v.begin()+idx);
        if (N > 0) std::cout << ", "; 
    }
    std::cout << '>';

    return 0;
}