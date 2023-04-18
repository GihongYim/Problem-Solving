#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int M, int N) {
    int answer = 0;
    answer = min((M - 1) + M * (N - 1), (N - 1) + N * (M - 1));
    return answer;
}