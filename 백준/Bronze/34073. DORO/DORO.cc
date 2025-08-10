#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	string word;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> word;
		word += "DORO";
		cout << word << ' ';
	}
	cout << '\n';

	return 0;
}