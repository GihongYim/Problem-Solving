#include <string>
#include <vector>
#include <sstream>
using namespace std;

string solution(string polynomial) {
    string answer = "";
    vector<int> poly(2);
    stringstream sin(polynomial);
    string term;
    int num;
    
    sin >> term;
    if (term == "x") 
        poly[1] += 1;
    else if (term[term.length() - 1] == 'x')
        poly[1] += (stoi(term));
    else
        poly[0] += (stoi(term));
    while (sin >> term) {
        if (term == "+")
            continue;
        if (term == "x") 
            poly[1] += 1;
        else if (term[term.length() - 1] == 'x')
            poly[1] += (stoi(term));
        else
            poly[0] += (stoi(term));
    }
    if (poly[1] != 0) {
        if (poly[1] == 1)
            answer += "x";
        else
            answer += to_string(poly[1]) + "x";
    }
    if (poly[1] != 0 && poly[0] != 0)
        answer += " + ";
    if (poly[0] != 0) {
        answer += to_string(poly[0]);
    }
    if (poly[0] == 0 && poly[1] == 0)
        answer = "0";
    return answer;
}