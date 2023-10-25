#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    int N, M;
    string num;
    int count;

    cin >> T;
    for (int t = 0; t < T; t++) {
        cin >> N >> M;
        count = 0;
        for (int i = N; i <= M; i++) {
            num = to_string(i);
            for (int i = 0; i < num.length(); i++) {
                if (num[i] == '0')
                    count++;
            }
        }
        cout << count << '\n';
    }
    return 0;
}