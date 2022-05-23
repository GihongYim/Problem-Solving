#include <iostream>
#include <algorithm>
using namespace std;

int N,Q;
long long tree[100005];
long long cum[100005];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N,Q;
    int index;
    long long pos;
    long long ret;

    cin >> N >> Q;
    cin >> tree[0];
    for (int i = 1; i < N; i++)
    {
        cin >> tree[i];
    }
    sort(tree, tree + N);
    cum[0] = tree[0];
    for (int i = 1; i < N; i++)
    {
        cum[i] = cum[i - 1] + tree[i];
    }
    for (int i = 0; i < Q; i++)
    {
        cin >> pos;
        
        if (pos < tree[0])
        {
            ret = cum[N - 1] - (N * pos); 
        }
        else if (pos > tree[N - 1])
        {
            ret = N * pos - cum[N - 1];
        }
        else
        {
            index = upper_bound(tree, tree + N, pos) - (tree + 0) - 1;
            // cout << "index: " << index << '\n';
            // cout << "pos: " << pos << '\n';
            ret = ((index  + 1) * pos - cum[index]) 
                    +(cum[N - 1] - cum[index] - pos * (N - 1 - index)); 
        }
        cout << ret << '\n';
    }

    return (0);
}