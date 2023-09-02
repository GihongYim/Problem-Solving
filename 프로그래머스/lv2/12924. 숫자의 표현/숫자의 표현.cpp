#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int first = 1;
    int last = 1;
    int sum = 1;
    while (1) {
        if (last > n)
            break;
        if (sum < n) {
            last++;
            sum += last;
        } else if (sum > n) {
            sum -= first;
            first++;
        } else {
            answer++;
            sum -= first;
            first++;
        }
    }
    return answer;
}