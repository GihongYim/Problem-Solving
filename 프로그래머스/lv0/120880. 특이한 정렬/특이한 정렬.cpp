#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    int left, right;
    sort(numlist.begin(), numlist.end());
    for (int i = 0; i < numlist.size(); i++) {
        if (numlist[i] == n) {
            left = i - 1;
            right = i + 1;
            answer.push_back(n);
            break;
        } 
        if (i + 1 < numlist.size() && n > numlist[i] && n < numlist[i + 1])
        {
            left = i;
            right = i + 1;
            break ;
        }
    }
    if (n > numlist[numlist.size() - 1]) {
        left = numlist.size() - 1;
        right = numlist.size();
    }
    
    if (n < numlist[0]) {
        left = -1;
        right = 0;
    }
    while (left >= 0 && right < numlist.size()) {
        if (n - numlist[left] < numlist[right] - n)
            answer.push_back(numlist[left--]);
        else
            answer.push_back(numlist[right++]);
    }
    while (left >= 0) {
        answer.push_back(numlist[left--]);
    }
    while (right < numlist.size()) {
        answer.push_back(numlist[right++]);
    }
    return answer;
}