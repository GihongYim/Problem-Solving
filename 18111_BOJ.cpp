#include <iostream>
using namespace std;

int main()
{
    int N, M, B;
    int map[500][500];
    int temp;
    int lower;
    int upper;
    int ret;
    int height;
    int cnt = 0;
    
    cin >> N >> M >> B;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> map[i][j];
        }
    }
    upper = -1;
    lower = 257;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (map[i][j] < lower)
            {
                lower = map[i][j];
            }
            if (map[i][j] > upper)
            {
                upper = map[i][j];
            }
        }
    }
    for(int k = lower; k <= upper; k++)
    {
        temp = 0;
        cnt = B;
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M;j++)
            {
                if (k > map[i][j])
                {
                    cnt -= (k - map[i][j]);
                    temp += (k - map[i][j]);
                }
                if (k < map[i][j])
                {
                    cnt += (map[i][j] - k);
                    temp += (2 * (map[i][j] - k));
                }
            }
        }
        if (cnt < 0)
            continue;
        if (k == lower)
        {
            height = k;
            ret = temp;
        }
        if (temp <= ret)
        {
            height = k;
            ret = temp;
        }
    } 
    cout << ret << ' ' << height << '\n';
    return (0);
}