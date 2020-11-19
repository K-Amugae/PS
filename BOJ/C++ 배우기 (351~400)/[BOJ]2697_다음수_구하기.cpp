#include <iostream>
#include <algorithm>

int main() {
    int T;
    std::string testCase;
    
    std::cin >> T;
    for (int i = 0; i < T; ++i) {
        std::cin >> testCase;
        if (std::next_permutation(testCase.begin(), testCase.end()))
            std::cout << testCase << '\n';
        else std::cout <<"BIGGEST\n";
    }
    
    return 0;
}