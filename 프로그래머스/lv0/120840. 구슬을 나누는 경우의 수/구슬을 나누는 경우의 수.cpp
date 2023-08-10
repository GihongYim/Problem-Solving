#include <string>
#include <vector>
#include <numeric>
using namespace std;

__int128 solution(int balls, int share) {
    __int128 answer = 1;
    for (int i = balls - share + 1; i <= balls; i++)
        answer *= i;
    for (int i = 1; i <= share; i++)
        answer /= i;
    return answer;
}