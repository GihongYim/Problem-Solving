#include <iostream>
using namespace std;

int A[1005];
int mod[7] = {0, };
bool valid = false;

void search(int n,int curr)
{
    if (n % 7 == 4)
    {
        valid = true;
        return ;
    }
    for (int i = curr; i < 7;i++)
    {
        if (mod[i] > 0)
        {
            mod[i]--;
            search(n + i, i);
            mod[i]++;
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        mod[A[i] % 7]++;
    }
    for (int i = 0; i < 7; i++)
    {
        if (mod[i] > 7)
            mod[i] = 6;
    }
    search(0, 1);
    if (valid)
        cout << "YES\n";
    else
        cout << "NO\n";
    return (0);
}