#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

const int MAX = 5005;

int N;
string map[MAX];



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> map[i];
    }
    // if (N % 2 == 1) {
    //     cout << "0\n";
    //     return 0;
    // }
    for (int i = 0; i < N - 1; i++) {
        int mlen = map[i].length();
        for (int j = 0; j < mlen; j++) {
            if (map[i][j] == 'R') {
                if (map[i + 1][j] == 'R' && map[i + 1][j + 1] == 'R') {
                    map[i][j] = 'X';
                    map[i + 1][j] = 'X';
                    map[i + 1][j + 1] = 'X';
                }else {
                    cout << "0\n";
                    return 0;
                }   
            }
            if (map[i][j] == 'B') {
                if (j + 1 < mlen && map[i][j + 1] == 'B' && map[i + 1][j + 1] == 'B') {
                    map[i][j] = 'X';
                    map[i][j + 1] = 'X';
                    map[i + 1][j + 1] = 'X';
                } else {
                    cout << "0\n";
                    return 0;
                }
            }
        }
    }
    for (int j = 0; j < map[N - 1].length(); j++) {
        if (map[N - 1][j] != 'X') {
            cout << "0\n";
            return 0;
        }
    }
    cout << "1\n";
    return 0;
}