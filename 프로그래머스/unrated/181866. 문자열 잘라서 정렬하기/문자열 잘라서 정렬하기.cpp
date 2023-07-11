#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iostream>
using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    stringstream sst(myString);
    string str;
    while (getline(sst, str, 'x'))
    {
        if (str == "")
            continue;
        answer.push_back(str);
    }
    sort(answer.begin(), answer.end());
    return answer;
}