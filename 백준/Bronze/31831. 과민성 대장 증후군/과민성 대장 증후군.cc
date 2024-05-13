#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M;
	int stress = 0;
	int a;
	int days = 0;
	int sick = 0;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> a;
		stress += a;
		stress = max(0, stress);
		if (stress > 0)
			days++;
		else
			days = 0;
		if (stress >= M)
			sick++;
	}
	cout << sick << '\n';

	return 0;
}