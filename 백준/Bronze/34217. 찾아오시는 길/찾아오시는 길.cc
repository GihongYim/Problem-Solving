#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b;
	int c, d;

	cin >> a >> b;
	cin >> c >> d;

	if (a + c < b + d) {
		cout << "Hanyang Univ." << "\n";
	} else if (a + c > b + d) {
		cout << "Yongdap" << "\n";
	} else {
		cout << "Either" << "\n";
	}

	return 0;
}