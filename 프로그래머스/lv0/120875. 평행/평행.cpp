#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int solution(vector<vector<int>> dots) {
    vector<int> p = {0,1,2,3};
    int x1,x2,y1,y2;
    do {
        x1 = dots[p[0]][0] - dots[p[1]][0];
        y1 = dots[p[0]][1] - dots[p[1]][1];
        x2 = dots[p[2]][0] - dots[p[3]][0];
        y2 = dots[p[2]][1] - dots[p[3]][1];
        
        if (x1 * y2 - x2 * y1 == 0)
            return 1;
    }while (next_permutation(p.begin(), p.end()));
    return 0;
}