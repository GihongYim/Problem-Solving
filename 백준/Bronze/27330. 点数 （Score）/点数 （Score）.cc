#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;

    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cin >> M;

    set<int> B;
    for (int i = 0; i < M; i++) {
        int b;
        cin >> b;
        B.insert(b);
    }

    int score = 0;
    
    for (int i = 0; i < N; i++) {
        score += A[i];
        if (B.find(score) != B.end()) {
            score = 0;
        }
    }

    cout << score << '\n';

    return 0;
}