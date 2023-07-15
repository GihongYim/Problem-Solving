#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string str;
    size_t pos = 0;
    size_t next;
    while(1) {
        next = myStr.find_first_of("abc", pos);
        if (next == string::npos)
            break ;
        myStr[next] = ' ';
        pos = next;
    }
    stringstream sst(myStr);
    while (sst >> str)
    {
        answer.push_back(str);
    }
    if (answer.empty()) {
        answer.push_back("EMPTY");
    }
    return answer;
}