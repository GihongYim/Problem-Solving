#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    string str;
    stringstream sin(myString);
    while (getline(sin, str, 'x')){
        answer.push_back(str.length());
    }
    if (myString[myString.length() - 1] == 'x')
        answer.push_back(0);
    return answer;
}