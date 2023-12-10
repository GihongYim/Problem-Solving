#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    int card;
    queue<int> q;

    cin >> N;
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }
    while (q.size() > 1) {
        card = q.front();
        cout << card << ' ';
        q.pop();
        card = q.front();
        q.pop();
        q.push(card);
    }
    cout << q.front() << '\n';
    return 0;
}