#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;

	cin >> N;
	
	vector<int> ball(N);

	for (int i = 0; i < N; i++) {
		cin >> ball[i];
	}
	sort(ball.begin(), ball.end());

	int minBracelet = 0;

	for (int i = 0; i < N - 1; i++) {
		minBracelet += (ball[i + 1] - ball[i]);
	}
	minBracelet += (ball[N - 1] - ball[0]);
	
	cout << minBracelet << '\n';

	return 0;
}