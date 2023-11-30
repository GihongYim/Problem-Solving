#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	int parity;

	while (1) {
		cin >> str;
		if (str == "#")
			break;
		parity = 0;
		for (int i = 0; i < str.length() - 1; i++) {
			if (str[i] == '1')
				parity = 1 - parity;
		}
		if (str[str.length() - 1] == 'o')
			parity = 1 - parity;
			str[str.length() - 1] = parity + '0';
		cout << str << '\n';
	}
	return 0;
}