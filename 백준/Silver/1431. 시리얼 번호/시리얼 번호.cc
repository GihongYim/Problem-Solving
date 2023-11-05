#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int vcmp(string a, string b) {
	int a_num, b_num;
	if (a.length() != b.length()) {
		return a.length() < b.length();
	}
	a_num = 0;
	b_num = 0;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] >= '0' && a[i] <= '9')
			a_num += (a[i] - '0');
	}
	for (int i = 0; i < b.length(); i++) {
		if (b[i] >= '0' && b[i] <= '9')
			b_num += (b[i] - '0');
	}

	if (a_num != b_num) {
		return a_num < b_num;
	}

	return a < b;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	vector<string> v;
	string serial;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> serial;
		v.push_back(serial);
	}
	sort(v.begin(), v.end(), vcmp);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
	return 0;
}