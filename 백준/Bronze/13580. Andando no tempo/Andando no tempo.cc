#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int A[3];
bool ok = false;

void dfs(int n, int pos, bool moved) {
    if (n == 3) {
        if (pos == 0 && moved)
            ok = true;
        return ;
    }
    if (ok) {
        return ;
    }
    dfs(n + 1, pos, moved);
    dfs(n + 1, pos + A[n], true);
    dfs(n + 1, pos - A[n], true);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    for (int i = 0; i < 3; i++) {
        cin >> A[i];
    }
    dfs(0, 0, false);
    if (ok) {
        cout << "S\n";
    } else {
        cout << "N\n";
    }
    return 0;
}