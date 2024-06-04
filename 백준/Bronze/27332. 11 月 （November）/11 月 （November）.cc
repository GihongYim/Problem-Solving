#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int A, B;

	cin >> A >> B;

	if (A + B * 7 > 30) {
		cout << "0\n";
	} else {
		cout << "1\n";
	}

	return 0;
}