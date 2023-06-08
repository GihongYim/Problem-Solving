#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    char temp;
    while (s < e)
    {
        temp = my_string[s];
        my_string[s] = my_string[e];
        my_string[e] = temp;
        s++;
        e--;
    }
    answer = my_string;
    return answer;
}