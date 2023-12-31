#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    int x, y, w, h;
    int paper[1002][1002];
    for (int i = 0; i < 1002; i++) 
        fill(paper[i], paper[i] + 1002, 0);
    cin >> n;
    vector<int> paper_cnt(n + 1);
    for (int test_case = 1; test_case <= n; test_case++) {
        cin >> x >> y >> w >> h;
        for (int i = x; i < x + w; i++) {
            for (int j = y; j < y + h; j++) {
                paper[i][j] = test_case;
            }
        }
    }
    for (int i = 0; i < 1002; i++) {
        for (int j = 0; j < 1002; j++) {
            if (paper[i][j] != 0)
                paper_cnt[paper[i][j]]++;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << paper_cnt[i] << '\n';
    }
    return 0;
}