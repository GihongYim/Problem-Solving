#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	int answer = 0;
	for (int a = 1; a <= 500; a++) {
		for (int b = 1; b <= a; b++) {
			if (a * a == b * b + n)
				answer++;
		}
	}
	cout << answer << '\n';
	return 0;
}