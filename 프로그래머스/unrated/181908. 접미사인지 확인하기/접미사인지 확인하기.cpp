#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    if (my_string.find(is_suffix, my_string.size() - is_suffix.size()) != string::npos)
        answer = 1;
    return answer;
}