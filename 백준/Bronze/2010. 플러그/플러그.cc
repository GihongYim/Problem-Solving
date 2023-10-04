#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int tap;
	int answer = 0;


	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tap;
		answer += (tap - 1);
	}
	answer++;
	cout << answer << '\n';
	return 0;

}