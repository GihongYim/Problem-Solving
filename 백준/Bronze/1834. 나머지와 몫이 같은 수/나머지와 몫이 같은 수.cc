#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long N;
	long long total = 0;
	
	cin >> N;
	for (int i = 1; i < N; i++) {
		total += (N * i + i);
	}
	cout << total << '\n';
	return 0;
}