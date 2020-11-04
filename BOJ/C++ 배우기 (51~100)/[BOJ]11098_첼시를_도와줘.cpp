#include <iostream>

int main()
{
    short n = 0, p = 0;
    int C = 0, maxC = 0;
    std::string player = "", result = "";

    std::cin >> n;
    for (short i = 0; i < n; ++i) {
        maxC = 0;
        std::cin >> p;
        for (short j = 0; j < p; ++j) {
            std::cin >> C >> player;
            if (C > maxC) {
                maxC = C;
                result = player;
            }
        }
        std::cout << result << '\n';
    }
    return 0;
}