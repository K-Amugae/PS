#include <iostream>

int main() {
    std::string msg;
    int K;
    std::cin >> K >> msg;
    int R = (int)msg.length()/K;
    char arr[R][K];
    for (int i = 0; i < (int)msg.length(); ++i) {
        if ((i / K)%2 == 0)
            arr[i/K][i%K] = msg[i];
        else arr[i/K][K-1 - i%K] = msg[i];
    }
    
    for (int i = 0; i < (int)msg.length(); ++i) std::cout << arr[i%R][i/R];
    
    return 0;
}