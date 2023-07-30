#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int answer = 0;
	int count = 1;

	cin >> N;

	while (N > 0) {
		if (count <= N) {
			N -= count;
			count++;
		} else {
			count = 1;
			N -= count;
			count++;
		}
		answer++;
	}
	cout << answer << '\n';
	return 0;
}