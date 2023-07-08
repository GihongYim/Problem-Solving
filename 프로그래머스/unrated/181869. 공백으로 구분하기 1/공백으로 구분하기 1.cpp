#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string str;
    stringstream sin;
    sin.str(my_string);
    while (sin >> str)
    {
        answer.push_back(str);
    }
    return answer;
}