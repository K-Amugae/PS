#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    string temp;
    vector<int> clothes_Qty(1,1);

    // vector swap, sort 이용
    for (int i = 0; i < clothes.size(); i++) {
        temp = clothes[i][0];
        clothes[i][0] = clothes[i][1];
        clothes[i][1] = temp;
    }
    sort(clothes.begin(), clothes.end());

    for (int i = 0; i < clothes.size() - 1; i++) {
        clothes_Qty.back()++;
        if (clothes[i+1][0] != clothes[i][0]) {
            answer *= clothes_Qty.back();
            clothes_Qty.push_back(1);
        }
    }
    answer *= ++clothes_Qty.back();
      
    return --answer;
}