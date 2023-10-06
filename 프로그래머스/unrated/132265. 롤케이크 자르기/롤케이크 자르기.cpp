#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    map<int, int> a, b;
    for (int i = 0; i < topping.size(); i++) {
        if (b.find(topping[i]) == b.end()) {
            b.insert(make_pair(topping[i], 1));
        } else {
            b[topping[i]]++;
        }
    }
    
    for (int i = 0; i < topping.size(); i++) {
        if (a.find(topping[i]) == a.end()) {
            a.insert(make_pair(topping[i], 1));
        } else {
            a[topping[i]]++;
        }
        if (b[topping[i]] == 1) {
            b.erase(topping[i]);
        } else {
            b[topping[i]]--;
        }
        if (a.size() == b.size())
            answer++;
    }
    return answer;
}