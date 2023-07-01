#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    string str;
    for (int i = 0; i < strArr.size(); i++) {
        str.clear();
        if (i % 2 == 1) {
            for (int j = 0; j < strArr[i].length(); j++) {
                str += toupper(strArr[i][j]);
            }
        } else {
           for (int j = 0; j < strArr[i].length(); j++) {
                str += tolower(strArr[i][j]);
            } 
        }
        answer.push_back(str);
    }
    return answer;
}