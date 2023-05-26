#include <string>
#include <vector>

using namespace std;

bool checkFive(int n)
{
    while (n > 0)
    {
        if (n % 5 != 0)
            return false;
        n /= 10;
    }
    return true;
}

vector<int> solution(int l, int r) {
    vector<int> answer;
    int start;
    
    if (l % 5 != 0)
        start = l + (5 - (l % 5));
    else
        start = l;
    for (int i = start; i <= r; i += 5)
    {
        if (checkFive(i))
            answer.push_back(i);
    }
    if (answer.empty())
        answer.push_back(-1);
    return answer;
}