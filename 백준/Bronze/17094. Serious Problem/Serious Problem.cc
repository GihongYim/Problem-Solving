#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int two = 0;
	int exp = 0;
	int len;
	string str;

	cin >> len;
	cin >> str;

	for (int i = 0; i < len; i++) {
		if (str[i] == '2')
			two++;
		else
			exp++;
	}
	if (two > exp)
		cout << "2\n";
	else if (two < exp)
		cout << "e\n";
	else
		cout << "yee\n";
		
	return 0;
}