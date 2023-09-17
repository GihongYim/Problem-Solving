#include <string>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    list<string> l;
    list<string>::iterator it;
    string city;
    for (int i = 0; i < cities.size(); i++) {
        for (int  j = 0; j < cities[i].length(); j++) {
            cities[i][j] = tolower(cities[i][j]);
        }
        it = find(l.begin(), l.end(), cities[i]);
        
        if (l.empty() || it == l.end()) {
            answer += 5;
            l.push_back(cities[i]);
        } else {
            answer += 1;
            l.erase(it);
            l.push_back(cities[i]);
        }
        if (l.size() > cacheSize) {
            l.pop_front();
        }
    }
    return answer;
}