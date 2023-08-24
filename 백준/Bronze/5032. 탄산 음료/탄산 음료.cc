#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int e, f, c;
	int answer = 0;
	int bottle;
	int newBottle;
	cin >> e >> f >> c;
	bottle = e + f;
	while (bottle >= c) {
		newBottle = (bottle / c);
		answer += newBottle;
		bottle %= c;
		bottle += newBottle;
	}
	cout << answer << '\n';
	return 0;
}