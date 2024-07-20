#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	int A[11];
	int M;
	int B[11];

	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}

	cin >> M;
	int total = 0;
	for (int i = 1; i <= M; i++) {
		cin >> B[i];
		total += A[B[i]];
	}
	cout << total << '\n';
	return 0;
}