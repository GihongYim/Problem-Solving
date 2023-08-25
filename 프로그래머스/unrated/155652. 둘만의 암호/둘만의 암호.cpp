#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int pos;
    int alphaSize;
    for (int i = 0; i < skip.length(); i++) {
        pos = alphabet.find(skip[i]);
        alphabet.erase(pos, 1);
    }
    alphaSize = alphabet.length();
    for (int i = 0; i < s.length(); i++) {
        pos = alphabet.find(s[i]);
        pos = (pos + index) % alphaSize;
        answer += alphabet[pos];
    }
    return answer;
}