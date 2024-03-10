#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int N;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int card;
    int ans = 0;
    priority_queue<int, vector<int>, greater<int> > pq;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> card;
        pq.push(card);
    }
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        a = pq.top(); pq.pop();
        b = pq.top(); pq.pop();
        pq.push(a + b);
        ans += (a + b);

    }
    cout << ans << '\n';
    return 0;
}