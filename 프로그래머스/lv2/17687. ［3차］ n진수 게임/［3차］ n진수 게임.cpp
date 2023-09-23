#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(int n, int t, int m, int p) {
    string answer = "";
    string seq = "0";
    string numStr;
    string hex = "0123456789ABCDEF";
    int num;
    for (int i = 1; i < m * (t + 1); i++) {
        num = i;
        numStr = "";
        while (num > 0) {
            numStr += hex[num % n];
            num /= n;
        }
        reverse(numStr.begin(), numStr.end());
        seq += numStr;
    }
    p--;
    for (int i = 0; i < t; i++) {
        answer += seq[m * i + p];
    }
    return answer;
}