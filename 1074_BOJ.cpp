#include <iostream>
using namespace std;

int cnt;
int r;
int c;
int finish;

void search(int r1, int c1, int r2, int c2)
{
    if (finish == 1)
        return ;
    if (!(r >= r1 && r <= r2 && c >= c1 && c <= c2))
    {
        cnt += (r2 - r1 + 1) * (c2 - c1 + 1);
        return ;
    }
    if (r1 == r2 && c1 == c2)
    {
        if (r1 == r && c1 == c)
        {
            cout << cnt << '\n';
            finish = 1;
            return ;
        }
        cnt++;
        return ;
    }
    
    search(r1, c1, r1 + (r2 - r1) / 2 , c1 + (c2 - c1) / 2);
    search(r1, c1 + (c2 - c1) / 2 + 1, r1 + (r2 - r1) / 2, c2);
    search(r1 + (r2 - r1) / 2 + 1, c1, r2, c1 + (c2 - c1) / 2);
    search(r1 + (r2 - r1) / 2 + 1, c1 + (c2 - c1) / 2 + 1, r2, c2);  
}


int main(void)
{
    int N;
    int number;
 
    cnt = 0;
    cin >> N >> r >> c;
    number = 1;
    for(int i = 0; i < N;i++)
        number *= 2;
    search(0, 0, number - 1, number - 1);
}