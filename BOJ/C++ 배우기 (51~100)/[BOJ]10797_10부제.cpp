#include <iostream>

int main() {
    short date, car, cnt = 0;
    std::cin >> date;
    for (int i = 0; i < 5; ++i) {
        std::cin >> car;
        if (date == car) cnt++;
    }
    std::cout << cnt;
    
    return 0;
}