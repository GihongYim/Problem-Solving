#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int num = 0;
    for (int i = 0; i < my_string.length(); i++)
    {
        if (my_string[i] < '0' || my_string[i] > '9')
        {
            answer += num;
            num = 0;
        }
        else
        {
            num *= 10;
            num += (my_string[i] - '0');
        }
        
    }
    answer += num;
    return answer;
}