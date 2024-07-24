#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int l = 0;
	int k = 0;
	int p = 0;

	for (int i = 0; i < 3; i++) {
		string str;

		cin >> str;

		if (str[0] == 'l') {
			l++;
		} else if (str[0] == 'k') {
			k++;
		}
		else if (str[0] == 'p') {
			p++;
		}
	}

	if (l == 0 || k == 0 || p == 0) {
		cout << "PONIX\n";
	} else {
		cout << "GLOBAL\n";
	}
	
	return 0;
}