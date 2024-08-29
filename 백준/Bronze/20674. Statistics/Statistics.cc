#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;

	cin >> n;
	
	int curr;
	int next;
	int answer = 0;
	cin >> curr;
	for (int i = 1; i < n; i++) {
		int next;

		cin >> next;
		if (next > curr) {
			answer += (next - curr);
		} else {
			curr = next;
		}
	}
	cout << answer << '\n';

	return 0;
}