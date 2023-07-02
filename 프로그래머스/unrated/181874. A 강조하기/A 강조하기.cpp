#include <string>
#include <vector>
using namespace std;

string solution(string myString) {
    string answer = "";
    for (unsigned int i = 0; i < myString.length(); i++) {
        if (myString[i] == 'a' || myString[i] == 'A')
            answer += 'A';
        else
            answer += tolower(myString[i]);
    }
    return answer;
}