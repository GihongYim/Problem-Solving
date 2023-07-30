#include <string>
#include <vector>

using namespace std;

string solution(string a, string b) {
    string answer = "";
    int i, j;
    int carry = 0;
    int smallSum = 0;
    vector<int> rev;
    i = a.length() - 1;
    j = b.length() - 1;
    
    while (i >= 0 && j >= 0) {
        smallSum = (a[i] - '0') + (b[j] - '0') + carry;
        if (smallSum >= 10) {
            carry = 1;
            smallSum -= 10;
        } else {
            carry = 0;
        }
        rev.push_back(smallSum);
        i--;
        j--;
    }
    while (i >= 0) {
        smallSum = (a[i] - '0') + carry;
        if (smallSum >= 10) {
            carry = 1;
            smallSum -= 10;
        } else {
            carry = 0;
        }
        rev.push_back(smallSum);
        i--;
    }
    while (j >= 0) {
        smallSum = (b[j] - '0') + carry;
        if (smallSum >= 10) {
            carry = 1;
            smallSum -= 10;
        } else {
            carry = 0;
        }
        rev.push_back(smallSum);
        j--;
    }
    if (carry == 1)
        rev.push_back(1);
    for (int t = rev.size() - 1; t >= 0; t--) {
        answer += to_string(rev[t]);
    }
    return answer;
}