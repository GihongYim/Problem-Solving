#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int N;
    string helloBit;
    vector<string> v;
    string track;
    int answer = 0;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> track;
        v.push_back(track);
    }
    cin >> helloBit;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == helloBit)
            answer++;
    }
    cout << answer << '\n';

    return 0;
}