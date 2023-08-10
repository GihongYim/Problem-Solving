#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    for (int i = 1; i <= 3000; i++) {
        vector<int> edges = {sides[0], sides[1]};
        edges.push_back(i);
        sort(edges.begin(), edges.end());
        if (edges[0] + edges[1] > edges[2])
            answer++;
    }
    return answer;
}