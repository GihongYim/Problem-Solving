#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int         temp;
    int         start;

    temp = num * (num + 1);
    temp /= 2;
    start = (total - temp) / num + 1;
    for (int i = start; i < start + num; i++)
            answer.push_back(i);
    return answer;
}