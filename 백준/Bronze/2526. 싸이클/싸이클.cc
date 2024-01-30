#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, p;
    bool visited[100];
    vector<int> v;

    fill(visited, visited + 100, false);
    cin >> n >> p;

    int curr = n;
    int start;
    visited[curr] = true;
    while (1) {
        curr = (curr * n) % p;
        if (visited[curr]) {
            start = curr;
            break;
        }
        visited[curr] = true;
    }
    int cnt = 1;
    curr = (start * n) % p;
    while (1) {
        if (curr == start)
            break;
        curr = (curr * n) % p;
        cnt++;
    }
    cout << cnt << '\n';

    return 0;
}