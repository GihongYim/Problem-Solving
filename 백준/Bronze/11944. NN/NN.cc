#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    int q, r;
    string strN;
    string result;

    cin >> N >> M;
    strN = to_string(N);
    for (int i = 0; i < N; i++) {
        if (result.length() + N < M) {
            result += strN;
        } else {
            result += strN.substr(0, M - result.length());
        }
    }
    cout << result << '\n';
    return 0;
}