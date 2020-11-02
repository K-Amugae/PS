#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    short M = 0, N = 0;
    int result = 0, min = 0;
    
    cin >> M >> N;
    for (short i = M; i <= N; ++i) {
        if ((int)(sqrt(i) * 10000) % 10000 == 0) {
            result += i;
            if (min == 0) min = i;
        }
    }
    if (result == 0) cout << -1;
    else cout << result << '\n' << min;

    return 0;
}