#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string map[8];
    for (int i = 0; i < 8; i++) {
        cin >> map[i];
    }
    int answer = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = i % 2; j < 8; j+= 2) {
            if (map[i][j] == 'F')
                answer++;
        }
    }
    cout << answer << '\n';
    return 0;
}