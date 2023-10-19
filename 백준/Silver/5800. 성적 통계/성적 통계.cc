#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int K, N, maxScore, minScore, score, diff;
    vector<int> scores;
    cin >> K;
    for (int test_case = 1; test_case <= K; test_case++) {
        cin >> N;
        maxScore = -1;
        minScore = 101;
        scores.clear();
        for (int i = 0; i < N; i++) {
            cin >> score;
            scores.push_back(score);
            maxScore = max(maxScore, score);
            minScore = min(minScore, score); 
        }
        diff = 0;
        sort(scores.rbegin(), scores.rend());
        for (int i = 0; i < scores.size() - 1; i++) {
            diff = max(diff, scores[i] - scores[i + 1]);
        }
        cout << "Class " << test_case << '\n';
        cout << "Max " << maxScore << ", Min " << minScore << ", Largest gap " << diff << '\n'; 
    }
    return 0;
}