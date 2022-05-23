#include <iostream>
#include <vector>
using namespace std;

int N, M, S;
vector<int> adj[100005];
bool visited[100005];
bool gomgom[100005];
bool valid = false;

void search(int n)
{
    bool visit = false;
    if (valid)
        return ;
    for (auto u : adj[n])
    {
        if (!visited[u] && !gomgom[u])
        {
            visit = true;
            visited[u] = true;
            search(u);
            visited[u] = false;
        }
    }
    if (!visit)
    {
        bool gom = false;
        for (auto u : adj[n])
        {
            if(gomgom[u])
            {
                gom = true;
                break;
            } 
        }
        if (!gom)
            valid = true;
    }
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int u ,v;

    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
    }
    for (int i = 1; i <= N; i++)
    {
        visited[i] = false;
        gomgom[i] = false;
    }
    cin >> S;
    for (int i = 0; i < S; i++)
    {
        cin >> u;
        gomgom[u] = true;
    }
    if (gomgom[1])
    {
        valid = false;
    }
    else
    {
        visited[1] = true;
        search(1);
    }
    if (valid)
        cout << "yes\n";
    else
        cout << "Yes\n";
    return (0);
}