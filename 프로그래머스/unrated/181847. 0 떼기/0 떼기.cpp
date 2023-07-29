#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    size_t i = 0;
    
    while (n_str[i] == '0')
        i++;
    answer = n_str.substr(i);
    return answer;
}