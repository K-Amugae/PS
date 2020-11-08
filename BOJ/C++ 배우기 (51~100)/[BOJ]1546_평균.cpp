#include <iostream>

int main() {
    short N, max = 0;
    float avg = 0.;
    
    std::cin >> N;
    short *scores = new short[N];
    
    for (int i = 0; i < N; ++i) {
        std::cin >> scores[i];
        avg += (float)scores[i]/N;
        if (scores[i] > max) max = scores[i];
    }
    std::cout << avg*100/max;
    
    return 0;
}