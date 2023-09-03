#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int nNumOfOne = 0;
    int nextNumOfOne = 0;
    int next = n + 1;
    for (int i = 1; i <= n; i = (i << 1)) {
        if (n & i) 
            nNumOfOne++;
    }
    while (1) { 
        nextNumOfOne = 0;
        for (int i = 1; i <= next; i = (i << 1)) {
        if (next & i) 
            nextNumOfOne++;
        }
        if (nNumOfOne == nextNumOfOne) {
            break;
        }
        next++;
    }
    answer = next;
    return answer;
}