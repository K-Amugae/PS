#include <iostream>

int main() {
    int pax[4] = {0,}, max = 0, get_off, get_on;
    std::cin >> get_off >> pax[0];
    for (int i = 1; i < 4; ++i) {
        std::cin >> get_off >> get_on;
        pax[i] = pax[i-1] - get_off + get_on;
        if (pax[i] > max) max = pax[i];
    }
    std::cout << max;

    return 0;
}