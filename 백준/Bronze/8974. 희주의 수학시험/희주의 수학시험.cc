#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int a, b;
    int idx = 1;
    int num[1001];

    cin >> a >> b;

    int n = 1;
    while (idx <= 1000) {
        for (int i = 1; i <= n; i++) {
            num[idx++] = n;
            if (idx > 1000)
                break;
        }
        n++;
    }
    int answer = 0;
    for (int i = a; i <= b; i++) {
        answer += num[i];
    }
    cout << answer << '\n';
    return 0;
}