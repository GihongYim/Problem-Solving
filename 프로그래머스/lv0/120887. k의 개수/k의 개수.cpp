#include <string>
#include <vector>

using namespace std;

int countNum(int num, int digit)
{
    int ret = 0;

    while (num > 0)
    {
        if (num % 10 == digit)
            ret++;
        num /= 10;
    }
    return (ret);
}

int solution(int i, int j, int k) {
    int answer = 0;
    for (int num = i; num <= j; num++)
    {
        answer += countNum(num, k);
    }
    return answer;
}