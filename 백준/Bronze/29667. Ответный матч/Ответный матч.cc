#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;

    int aHome = s1[0] - '0';
    int bAway = s1[2] - '0';

    int bHome_now = s2[0] - '0';
    int aAway_now = s2[2] - '0';

    int A_total_now = aHome + aAway_now;
    int B_total_now = bAway + bHome_now;

    int A_away_now = aAway_now;  
    int B_away_now = bAway;      

 
    for (int addA = 0; addA <= 20; addA++) {
        for (int addB = 0; addB <= 20; addB++) {

            int A_total = A_total_now + addA;
            int B_total = B_total_now + addB;

            int A_away = A_away_now + addA; 
            int B_away = B_away_now;        

            if (A_total == B_total && A_away == B_away) {
                cout << "YES\n";
                return 0;
            }
        }
    }

    cout << "NO\n";
    return 0;
}
