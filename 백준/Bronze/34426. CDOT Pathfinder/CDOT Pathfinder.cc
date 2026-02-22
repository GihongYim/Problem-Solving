#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int legs;
    int numOfPath;

    cin >> legs;
    for (int leg = 0; leg < legs; leg++) {
        cin >> numOfPath;
        double mph;
        double mile;
        double minTime = DBL_MAX;
        int minIndex = -1;
        for (int i = 0; i < numOfPath; i++) {
            cin >> mph >> mile;
            double time = mile * 60 / mph;
            if (time < minTime) {
                minTime = time;
                minIndex = i;
            }
        }
        cout << minIndex + 1 << "\n";
    }

    return 0;
}