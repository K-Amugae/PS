#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    // Sort vectors
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    // If an element of participant[i] is different from completion[i], that participant is the answer.
    for (int i = 0; i < participant.size(); i++) {
        if (participant[i] != completion[i] || i == completion.size()) {
            return participant[i];
        }
    }
}