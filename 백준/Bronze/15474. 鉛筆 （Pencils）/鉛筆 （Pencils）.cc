#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, A, B, C, D;
	
	cin >> N >> A >> B >> C >> D;

	int AA = N / A * B;
	if (N % A != 0)
		AA += B;
	int BB = N / C * D;
	if (N % C != 0)
		BB += D;
	cout << min(AA, BB) << '\n';
	return 0;
}