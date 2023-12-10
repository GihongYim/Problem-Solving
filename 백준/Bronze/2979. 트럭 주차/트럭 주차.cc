#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int park[101] = {0, };
    int a, b, c;
    int start, end;
    cin >> a >> b >> c;
    for (int i = 0; i < 3; i++) {
        cin >> start >> end;
        for (int j = start; j < end; j++) {
            park[j]++;
        }
    }
    int answer = 0;
    for (int i = 0; i <= 100; i++) {
        if (park[i] == 1) {
            answer += a;
        } else if (park[i] == 2) {
            answer += (2 * b);
        } else if (park[i] == 3) {
            answer += (3 * c);
        } 
    }
    cout << answer << '\n';
    return 0;
}