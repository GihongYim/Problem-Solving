#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	int N;
	cin >> T;
	for (int t = 1; t <= T; t++ ){
		cin >> N;
		int sum = 0;
		for (int i = 1; i <= N; i += 2) {
			sum += i;
		}
		cout << sum << '\n';
	}
	return 0;
}