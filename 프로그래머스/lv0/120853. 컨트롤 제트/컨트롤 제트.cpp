#include <string>
#include <vector>
#include <sstream>
using namespace std;



int solution(string s) {
    int answer = 0;
    string numbers[10000];
    stringstream sin(s);
    int size = 0;
    while (sin >> numbers[size]) {
        size++;
    }
    for (int i = 0; i < size; i++) {
        if (numbers[i] == "Z")
            answer -= stoi(numbers[i - 1]);
        else
            answer += stoi(numbers[i]);
    }
    return answer;
}