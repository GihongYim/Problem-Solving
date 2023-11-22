#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int T, N, C;
	int days;
	cin >> T;

	for (int test_case = 1; test_case <= T; test_case++) {
		cin >> N >> C;
		days = N / C;
		if (N % C != 0)
			days++;
		cout << days << '\n';
	}
	return 0;
}