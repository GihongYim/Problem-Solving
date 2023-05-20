#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = n;
    for (unsigned int i = 0; i < control.length(); i++)
    {
        if (control[i] == 'w')
            answer++;
        else if (control[i] == 's')
            answer--;
        else if (control[i] == 'd')
            answer+= 10;
        else if (control[i] == 'a')
            answer-= 10;
    }
    return answer;
}