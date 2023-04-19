#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int fact = 1;
    for (int i = 1; ; i++)
    {
        fact *= i;
        if (fact > n)
        {
            answer = i - 1;
            break ;
        }
    }
    return answer;
}