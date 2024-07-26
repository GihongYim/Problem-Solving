#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string target;
	int people = 0;
	
	for (int i = 0; i < 7; i++) {
		string class_name;
		int num;
		cin >> class_name >> num;
		if (num > people) {
			target = class_name;
			people = num;
		}
	}
	cout << target << '\n';

	return 0;
}