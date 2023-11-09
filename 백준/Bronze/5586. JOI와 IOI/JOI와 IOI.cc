#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	string str;
	string split;
	int joi = 0;
	int ioi = 0;

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		split = str.substr(i, 3);
		if (split == "JOI")
			joi++;
		else if (split == "IOI")
			ioi++;
	}
	cout << joi << '\n';
	cout << ioi << '\n';
	return 0;
}