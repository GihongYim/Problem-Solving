#include <iostream>
using namespace std;

int main(void)
{
    bool bomb[2000001];
    int N;
    int C;
    int T;
    int ret;
    
    cin >> N >> C;
    for(int i = 0 ; i <= C; i++)
        bomb[i] = false;
    for(int i = 0 ; i < N; i++)
    {
        cin >> T;
        for(int j = T ; j <= C; j += T)
        {
            bomb[j] = true;
        }
    }
    ret = 0;
    for (int i = 0; i <= C; i++)
        if(bomb[i])
            ret++;
    cout << ret << '\n';
    return (0);
}