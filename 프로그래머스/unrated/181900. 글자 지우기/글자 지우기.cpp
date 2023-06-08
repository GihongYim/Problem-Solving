#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer;
    for (unsigned int i = 0; i < indices.size(); i++){
        my_string[indices[i]] = '0';
    }
    for (unsigned int i = 0; i < my_string.length(); i++){
        if (my_string[i] != '0')
            answer += my_string[i];
    }
    return answer;
}