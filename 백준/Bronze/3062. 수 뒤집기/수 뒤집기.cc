#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool check(string n, string revn) {
	int a, b;
	int num;
	string str;

	a = stoi(n);
	b = stoi(revn);
	num = a + b;
	str = to_string(num);
	int ll = 0;
	int rr = str.length() - 1;
	while (ll < rr) {
		if (str[ll] != str[rr]) {
			return false;
		}
		ll++;
		rr--;
	}
	return true;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int T;
	string n, revn;

	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		cin >> n;
		revn = n;
		reverse(revn.begin(), revn.end());

		if(check(n, revn)) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}