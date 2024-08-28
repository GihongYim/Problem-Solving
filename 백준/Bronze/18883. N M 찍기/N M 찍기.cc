#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int order = 1;
	
	int N, M;

	cin >> N >> M;
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << order++;
			if (j != M - 1) {
				cout << ' ';
			} else {
				cout << '\n';
			}
		}
	}

	return 0;
}