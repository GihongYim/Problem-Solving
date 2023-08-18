#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int num;
	vector<int> n(3);
	string str;

	for (int i = 0; i < 3; i++) {
		cin >> n[i];
	}
	cin >> str;
	sort(n.begin(), n.end());

	for (int i = 0; i < 3; i++) {
		cout << n[str[i] - 'A'] << ' ';
	}
	return 0;
} 