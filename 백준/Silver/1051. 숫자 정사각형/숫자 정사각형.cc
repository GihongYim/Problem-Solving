#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int N, M;
string map[51];

bool square(int len) {
    for (int i = 0; i < N - len + 1; i++) {
        for (int j = 0; j < M - len + 1; j++) {
            if (map[i][j] == map[i][j + len - 1]
            && map[i][j] == map[i + len - 1][j]
            && map[i][j] == map[i + len - 1][j + len - 1])
            return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> map[i];
    }
    for (int i = min(N, M); i >= 1; i--) {
        if (square(i)) {
            cout << i * i << '\n';
            return 0;
        }
    }
    
    return 0;
}