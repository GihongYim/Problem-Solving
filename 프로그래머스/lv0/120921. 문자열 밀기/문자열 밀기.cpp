#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string A, string B) {
    int answer = -1;
    string BB;
    BB = B + B;
    answer = BB.find(A);
    return answer;
}