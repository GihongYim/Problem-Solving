#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;

int dp[1000001];



int main()
{
	int N;
	scanf("%d", &N);
	memset(dp, 0x3f3f3f3f, sizeof(dp));
	dp[1] = 0;
	for (int i = 1; i <= N; i++) {
		if(3*i<=N)
			dp[3 * i] = min(dp[3 * i], dp[i] + 1);
		if(2*i<=N)
			dp[2 * i] = min(dp[2 * i], dp[i] + 1);
		if(i+1<=N)
			dp[i + 1] = min(dp[i + 1], dp[i] + 1);
	}
	printf("%d", dp[N]);
	return 0;

}