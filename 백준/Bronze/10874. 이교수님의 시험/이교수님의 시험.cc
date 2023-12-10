#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n;

    int answer[11];
    int retry = 0;
    for (int i = 1; i <= 10; i++) {
        answer[i] = ((i - 1) % 5) + 1;
    }
    cin >> n;
    int res;
    for (int i = 1; i <= n; i++) {
        int success = 1;
        for (int j = 1; j <= 10; j++) {
            cin >> res;
            if (answer[j] != res) {
                success = 0;

            }
        }
        if (success) {
            cout << i << '\n';
        }
    }

    return 0;
}