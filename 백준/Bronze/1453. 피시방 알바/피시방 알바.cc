#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    bool visited[101];
    int visitor;
    int reject = 0;

    cin >> N;
    fill(visited, visited + 101, false);
    for (int i = 0; i < N; i++) {
        cin >> visitor;
        if (visited[visitor])
            reject++;
        visited[visitor] = true;
    }
    cout << reject << '\n';
    return 0;
}