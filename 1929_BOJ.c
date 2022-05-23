#include <stdio.h>

#define MAXN 10000001

int prime[MAXN];

int main()
{
    int N, M;
    
    scanf("%d %d", &N, &M);
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= M; i++)
        prime[i] = 1;
    
    for (int i = 2; i <= M; i++)
    {
        if(prime[i] == 1)
        {
            for (int j = i + i; j <= M; j+=i)
                prime[j] = 0;
        }
    }
    for (int i = N; i <= M; i++)
    {
        if (prime[i] == 1)
            printf("%d\n", i);
    }
    return (0);
}