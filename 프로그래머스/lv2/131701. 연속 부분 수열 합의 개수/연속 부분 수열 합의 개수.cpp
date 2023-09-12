#include <string>
#include <vector>
#include <set>
using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    set<int> s;
    int seqSum;
    for (int len = 1; len <= elements.size(); len++) {
        for (int i = 0; i < elements.size(); i++) {
            seqSum = 0;
            for (int j = i; j < i + len; j++) {
                seqSum += elements[j % elements.size()];
            }
            s.insert(seqSum);
        }
    }
    answer=s.size();
    return answer;
}