#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v(100);
    int cnt = 1;
    for (int i = 1; i<= 100; i++) {
        if (cnt % 3 == 0 || cnt % 10 == 3) {
            cnt++;
            i--;
            continue;
        }
        if (cnt >= 10 && (cnt / 10) % 10 == 3){
            cnt++;
            i--;
            continue;
        } 
        if (cnt >= 100 && (cnt / 100) % 10 == 3) {
            cnt++;
            i--;
            continue;
        } 
        if (cnt >= 1000 && (cnt / 1000) % 10 == 3) {
            cnt++;
            i--;
            continue;
        }
        v[i] = cnt++;
        // cout << v[i] << ' ';
    }
    answer = v[n];
    return answer;
}