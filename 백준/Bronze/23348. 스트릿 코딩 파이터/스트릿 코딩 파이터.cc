#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, c;
	int n;
	int highScore = 0;
	int score;
	int s[3];
	
	cin >> a >> b >> c;
	cin >> n;

	for (int i = 0; i < n; i++) {
		score = 0;
		for (int j = 0; j < 3; j++) {
			cin >> s[0] >> s[1] >> s[2];
			score += (s[0] * a + s[1] * b + s[2] * c);
		}
		highScore = max(highScore, score);
	}
	cout << highScore << '\n';
	return 0;
}