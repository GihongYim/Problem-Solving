#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    long long a, b;
    long long input;
    stringstream sin(s);
    sin >> a;
    b = a;
    while (sin >> input){
        a = min(a, input);
        b = max(b, input);
    }
    answer = to_string(a) + " " + to_string(b);
    return answer;
}