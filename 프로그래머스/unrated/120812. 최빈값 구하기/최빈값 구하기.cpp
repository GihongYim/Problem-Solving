#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {
    int answer;
    int answer_cnt;
    int cnt[2500] = {0, };
    for (int i = 0; i < array.size(); i++)
        cnt[array[i] + 1000]++;
    answer = 0;
    answer_cnt = 0;
    for (int i = 0; i < 2500; i++)
    {
        if (answer_cnt < cnt[i])
        {
            answer = i - 1000;
            answer_cnt = cnt[i];
        }
    }
    for (int i = 0; i < 2500; i++)
    {
        if (i - 1000 == answer)
            continue;
        if (answer_cnt == cnt[i])
        {
            answer = -1;
            break ;
        }
    }
    return answer;
}