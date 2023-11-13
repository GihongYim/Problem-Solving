#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string num;
	int count = 1;
	int maxCount = 1;
	for (int i = 0; i < 3; i++) {
		cin >> num;
		count = 1;
		maxCount = 1;
		for (int j = 1; j < 8; j++) {
			if (num[j - 1] == num[j]) {
				count++;
				maxCount = max(maxCount, count);
			} else {
				count = 1;
			}
		}
		cout << maxCount << '\n';
	}
	return 0;
}