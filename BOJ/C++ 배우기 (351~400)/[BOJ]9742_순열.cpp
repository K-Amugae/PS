#include <iostream>
#include <algorithm>

int main() {
    std::string s;
    int idx = 0;
    bool isExist = false;
    
    while(std::cin >> s >> idx) {
        std::cout << s << ' ' << idx << " = ";
        for (int i = 1; i < idx; ++i) {
            isExist = std::next_permutation(s.begin(),s.end());
            if(!isExist) {
                std::cout << "No permutation\n";
                break;
            }
        }
        if (isExist) std::cout << s << '\n';
    }
    
    return 0;
}