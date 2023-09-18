#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int tcmp(vector<int> a, vector<int> b) {
    return a.size() < b.size();
}

vector<int> solution(string s) {
    vector<int> answer;
    vector<int> tuple;
    vector<vector<int>> tuples;
    int element;
    string elements;
    
    int pos = 2;
    int next;
    while (1) {
        next = s.find("}", pos);
        elements = s.substr(pos, next - pos);
        for (int i = 0; i < elements.length(); i++) {
            if (elements[i] == ',')
                elements[i] = ' ';
        }
        tuple.clear();
        stringstream sin(elements);
        while (sin >> element) {
            tuple.push_back(element);
        }
        tuples.push_back(tuple);
        pos = s.find("{", next);
        if (pos == string::npos)
            break;
        pos++;
    }
    sort(tuples.begin(), tuples.end(), tcmp);
    for (int i = 0; i < tuples.size(); i++) {
        sort(tuples[i].begin(), tuples[i].end());
    }
    answer.push_back(tuples[0][0]);
    for (int i = 1; i < tuples.size(); i++) {
        for (int j = 0; j < tuples[i].size() - 1; j++) {
            if (tuples[i - 1][j] != tuples[i][j]) {
                answer.push_back(tuples[i][j]);
                break ;
            }
        }
        if (tuples[i - 1][tuples[i - 1].size() - 1] == tuples[i][tuples[i - 1].size() - 1]) {
            answer.push_back(tuples[i][tuples[i].size() - 1]);
        }
    }
    return answer;
}