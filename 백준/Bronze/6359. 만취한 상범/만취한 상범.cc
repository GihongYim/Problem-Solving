#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T, n;
	int room[101];
	int answer;
	cin >> T;
	for (int test = 1; test <= T; test++) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			room[i] = 0;
		}
		for (int i = 2; i <= n; i++) {
			for (int j = i; j <= n; j += i) {
				room[j] = 1 - room[j];
			}
		}
		answer = 0;
		for (int i = 1; i <= n; i++) {
			if (!room[i])
				answer++;
		}
		cout << answer << '\n';
	}
}