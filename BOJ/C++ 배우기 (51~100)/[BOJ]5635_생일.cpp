#include <iostream>

int main()
{
    short n = 0, dd = 0, mm = 0, yyyy = 0;
    short max_dd = 0, max_mm = 0, max_yyyy = 0;
    short min_dd = 32, min_mm = 13, min_yyyy = 2011;
    std::string name = "", oldest = "", youngest = "";
    
    std::cin >> n;
    for (short i = 0; i < n; ++i) {
        std::cin >> name >> dd >> mm >> yyyy;
        if (yyyy > max_yyyy || (yyyy == max_yyyy && mm > max_mm) || (yyyy == max_yyyy && mm == max_mm && dd > max_dd)) { 
            oldest = name;
            max_yyyy = yyyy, max_mm = mm, max_dd = dd;
        }
        if (yyyy < min_yyyy || (yyyy == min_yyyy && mm < min_mm) || (yyyy == min_yyyy && mm == min_mm && dd < min_dd)) { 
            youngest = name;
            min_yyyy = yyyy, min_mm = mm, min_dd = dd;
        }
    }
    std::cout << oldest << '\n' << youngest;
    
    return 0;
}