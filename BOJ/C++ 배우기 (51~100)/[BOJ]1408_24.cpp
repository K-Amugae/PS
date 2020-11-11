#include <iostream>

int main() {
    int h, m, s;
    int cur_time, start_time, remain_time;
    scanf("%d:%d:%d", &h, &m, &s);
    cur_time = 3600*h + 60*m + s;
    scanf("%d:%d:%d", &h, &m, &s);
    start_time = 3600*h + 60*m + s;

    if (start_time < cur_time) remain_time = 24*3600 + start_time - cur_time;
    else remain_time = start_time - cur_time;
    
    printf("%02d:%02d:%02d", remain_time/3600, remain_time%3600/60, remain_time%3600%60%60);

    return 0;
}