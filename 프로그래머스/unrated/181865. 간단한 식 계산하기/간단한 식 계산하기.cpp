#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string binomial) {
    int answer = 0;
    stringstream sst(binomial);
    long long a, b;
    string op;
    sst >> a >> op >> b;
    if (op == "+") {
        answer = a + b;
    } else if (op == "-") {
        answer = a - b;
    } else if (op == "*") {
        answer = a * b;
    } else if (op == "/") {
        answer = a / b;
    }
    return answer;
}