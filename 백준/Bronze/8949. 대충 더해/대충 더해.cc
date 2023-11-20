#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string a, b;
	int i, j;
	vector<int> s;

	cin >> a >> b;
	i = a.size() - 1;
	j = b.size() - 1;
	while (i >= 0 && j >= 0) {
		s.push_back(a[i] - '0' + b[j] - '0');
		i--;
		j--;
	}
	while (i >= 0) {
		s.push_back(a[i--] - '0');
	}
	while (j >= 0) {
		s.push_back(b[j--] - '0');
	}
	for (int t = s.size() - 1; t >= 0; t--) {
		cout << s[t];
	}
	cout << '\n';
	return 0;
}