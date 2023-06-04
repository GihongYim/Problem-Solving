#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    int subnum;
    for (int i = 0; i < intStrs.size(); i++)
    {
        subnum = stoi(intStrs[i].substr(s, l));
        if (subnum > k)
            answer.push_back(subnum);
    }
    return answer;
}