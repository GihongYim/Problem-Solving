#include <iostream>
using namespace std;

int main(void)
{
	int N;

	cin >> N;
	int answer;
	if (N == 3) {
		answer = 0;
	} else {
		answer = (N) * (N - 1) * (N - 2) * (N - 3) / (4 * 3 * 2 * 1);
	}
	cout << answer << '\n';
	return 0;
}