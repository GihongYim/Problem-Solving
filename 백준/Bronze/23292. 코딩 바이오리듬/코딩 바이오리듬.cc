#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string birthDay;
    int n;
    int term;
    int result = 0;
    int maxValue = 0;
    int square = 0;
    string maxDate = "";
    
    string date;

    cin >> birthDay;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> date;

        result = 1;
    
        term = 0;
        for (int i = 0; i < 4; i++) {
            square = abs(birthDay[i] - date[i]);
            square *= square;
            term += square;
        }

        result *= term;

        term = 0;

        for (int i = 4; i < 6; i++) {
            square = abs(birthDay[i] - date[i]);
            square *= square;
            term += square;
        }

        result *= term;

        term = 0;

        for (int i = 6; i < 8; i++) {
            square = abs(birthDay[i] - date[i]);
            square *= square;
            term += square;
        }

        result *= term;

        if (maxValue < result) {
            maxValue = result;
            maxDate = date;
        }
        else if (maxValue == result) {
            if (date < maxDate) {
                maxDate = date;
            }
        }
    }

    cout << maxDate << '\n';

    return 0;
}