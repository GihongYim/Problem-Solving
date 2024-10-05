#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T;

    cin >> T;

    for (int t = 1; t <= T; t++) {
        long long N;
        long long NN;
        
        cin >> N;
        NN = N * N;
        bool isSelfSquare = true;

        while (N > 0) {
            if (N % 10!= NN % 10) {
                isSelfSquare = false;
                break;
            }
            N /= 10;
            NN /= 10;
        }
        if (isSelfSquare) 
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}