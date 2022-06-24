#include <iostream>
using namespace std;

int main()
{
    int score[5] = {6, 3, 2, 1, 2};
    int away[5];
    int home[5];
    int away_score;
    int home_score;

    for (int i = 0; i < 5;i++)
    {
        cin >> away[i];
    }
    for (int i = 0; i < 5;i++)
    {
        cin >> home[i];
    }
    away_score = 0;
    for (int i = 0; i < 5; i++)
    {
        away_score += (score[i] * away[i]);
    }
    home_score = 0;
    for (int i = 0; i < 5; i++)
    {
        home_score += (score[i] * home[i]);
    }
    cout << away_score << ' ' << home_score << '\n';
    
    return 0;
}