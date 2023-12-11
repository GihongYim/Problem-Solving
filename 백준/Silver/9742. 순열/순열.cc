#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string str;
	int pos;
	while (cin >> str >> pos) {
		string origin = str;
		int total = pos;
		do {
			pos--;
			if (pos <= 0)
				break;
		} while(next_permutation(str.begin(), str.end()));
		if (pos <= 0) 
			cout << origin << ' ' << total << " = " << str << '\n';
		else
			cout << origin << ' ' << total << " = " << "No permutation" << '\n';
	}

	return 0;
}