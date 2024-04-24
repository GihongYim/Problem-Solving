#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N;
    int a, d, g;

    cin >> N;
    vector <int> score(N);

    for (int i = 0; i < N; i++) {
        cin >> a >> d >> g;
        score[i] = a * (d + g);
        if (a == d + g) {
            score[i] <<= 1;
        }
    }
    cout << *max_element(score.begin(), score.end());

    return 0;
}