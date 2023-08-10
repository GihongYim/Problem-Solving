#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    int a;
    char op;
    stringstream sin(my_string);
    sin >> answer;
    
    while (sin >> op) {
        sin >> a;
        if (op == '+')
            answer += a;
        else
            answer -= a;
    }
    
    return answer;
}