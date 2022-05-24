#include <iostream>
using namespace std;

#define MOD 1000000007

int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}

long long minv(long long x, long long m)
{
    if (m == 1) return x;
    if (m % 2 == 1) return x * minv(x, m - 1)% MOD;
    long long p = minv(x,m/2);
    return p*p%MOD;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long M;
    long long N,S;
    long long total = 0;
    long long g;
    
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> N >> S;
        g = gcd(N, S);
        N /= g;
        S /= g;
        total += S * minv(N, MOD - 2) % MOD;
        total %= MOD;
    }

    cout << total << '\n';
    return (0);
}