#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;
    int score;
    int track[3] = {0, 3, 6};
    int field[4] = {1, 2, 4, 5};
    int p;
    cin >> T;
    for (int test_case = 1; test_case <= T; test_case++) {
        score = 0;
        cin >> p;
        score += 9.23076 * pow(26.7 - p, 1.835);
        cin >> p;
        score += 1.84523 * pow(p - 75, 1.348);
        cin >> p;
        score += 56.0211 * pow(p - 1.5, 1.05);
        cin >> p;
        score += 4.99087 * pow(42.5 - p, 1.81);
        cin >> p;
        score += 0.188807 * pow(p - 210, 1.41);
        cin >> p;
        score += 15.9803 * pow(p - 3.8, 1.04);
        cin >> p;
        score += 0.11193 * pow(254 - p, 1.88);
        cout << score << '\n';
    }
    return 0;
}