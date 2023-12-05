#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int aScore = 0;
    int bScore = 0;
    char last = 'D';
    int a[10];
    int b[10];

    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < 10; i++) {
        if (a[i] > b[i]) {
            aScore += 3;
            last = 'A';
        }
        else if (a[i] < b[i]) {
            bScore += 3;
            last = 'B';
        }
        else {
            aScore++; 
            bScore++;
        }
    }
    cout << aScore << ' ' << bScore << '\n';
    if (aScore > bScore) {
        cout << "A\n";
    } else if (aScore < bScore) {
        cout << "B\n";
    } else {
        cout << last << '\n';
    }
    return 0;
}
