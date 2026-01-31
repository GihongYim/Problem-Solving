#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    
    cin >> N;
    vector<int> numbers(N);
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }
    
    sort(numbers.begin(), numbers.end());
    vector<int> acc(N, 0);
    acc[0] = numbers[0];    
    for (int i = 1; i < N; i++) {
        acc[i] = acc[i - 1] + numbers[i];
    }

    int minIndex = 0;
    int minDiff = (acc[N - 1] - acc[0]) - numbers[0] * (N - 1);
    for (int i = 1; i < N - 1; i++) {
        int lowerSum = acc[i - 1];
        int upperSum = acc[N - 1] - acc[i];
        int diff = abs(i * numbers[i] - lowerSum + upperSum - (N - i - 1) * numbers[i]);
        if (diff < minDiff) {
            minDiff = diff;
            minIndex = i;
        }
    }

    if ((N - 1) * numbers[N - 1] - acc[N - 2] < minDiff) {
        minIndex = N - 1;
    }

    cout << numbers[minIndex] << '\n';
    return 0;
}