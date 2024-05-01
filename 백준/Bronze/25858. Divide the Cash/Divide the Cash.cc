#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, d;
    int total = 0;
    int student[31];

    cin >> n >> d;
    for (int i = 0; i < n; i++) {
        cin >> student[i];
        total += student[i];
    }
    for (int i = 0; i < n; i++) {
        cout << student[i] * d / total << '\n';
    }


    return 0;
}