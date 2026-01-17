#include <bits/stdc++.h>
using namespace std;

string getRoomNum(long long floor, long long num) {
    string f = to_string(floor);
    string n = to_string(num);

    return f + string(18 - n.length(), '0') + n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int T;
    long long N;
    
    cin >> T;
    for (int t = 1; t <= T; t++) {
        cin >> N;
        
        long long floor = 1;
        long long sq = 1;
        while (sq * 2 <= N) {
            floor++;
            sq *= 2;
        }

        long long num = N - (sq - 1);
        while (floor >= 1) {
            cout << getRoomNum(floor, num) << '\n';
            num = (num + 1) / 2;
            floor--;
        }
        
    }
    
    return 0;
}