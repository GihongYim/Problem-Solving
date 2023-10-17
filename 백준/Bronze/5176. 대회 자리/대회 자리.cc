#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int K, P, M;
    int player;
    int seats[501];
    int answer;
    cin >> K;
    for (int test_case = 0; test_case < K; test_case++) {
        cin >> P >> M;
        fill(seats, seats + M + 1, 0);
        answer = 0;
        for (int i = 0; i < P; i++) {
            cin >> player;
            if (seats[player] != 0)
                answer++;
            else
                seats[player] = 1;
        }
        cout << answer << '\n';
    }
    return 0;
}