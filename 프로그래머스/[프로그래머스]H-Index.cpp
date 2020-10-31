#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {    
    sort(citations.begin(), citations.end(), greater<int>());
    // citations.size()부터 역순으로 반복문 돌면서 i보다 큰 수 개수가 i개 이상인지 확인
    for (int i = citations.size(); i > 0; i--) {
        if (citations[i-1] >= i) return i;
    }
    // 위에 해당하는 경우가 없으면 h-index = 0
    return 0;
}
