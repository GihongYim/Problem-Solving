#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string plane;
	string key;

	getline(cin, plane);
	getline(cin, key);

	int pos = 0;
	string encrypted = "";
	char ench;
	for (int i = 0; i < plane.length(); i++)
	{
		if (isalpha(plane[i])) {
			ench = (plane[i] - 'a') - (key[pos] - 'a' + 1);
			if (ench + 'a' < 'a') {
				ench += 26;
			}
			encrypted += (ench + 'a');
		} else {
			encrypted += (plane[i]);
		}
		pos++;
		if (pos == key.length())
			pos = 0;

	}
	cout << encrypted << '\n';

	return 0;
}