#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (1) {
        int N;
        
        cin >> N;

        if (N == 0) break;

        for (int i = 0; i < N; i++) {
            vector<int> marks;
            for (int i = 0; i < 5; i++) {
                int temp;
                cin >> temp;
                if (temp <= 127) {
                    marks.push_back(i);
                }
            }
            if (marks.size() != 1) {
                cout << "*" << '\n';
            } else {
                cout << (char)(marks[0] + 'A') << '\n';
            }
        }

    }
    return 0;
}