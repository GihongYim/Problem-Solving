#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector<int> score(3);
    
    for (int i = 0; i < 3; i++) {
        cin >> score[i];
    }
    sort(score.begin(), score.end());
    cout << score[1] + score[2] << '\n';

    return 0;
}
