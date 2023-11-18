#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string str;
	string aeiou = "aeiou";
	while (cin >> str) {
		for (int i = 1; i < str.length() - 1; i++) {
			if (str[i] == 'p' && str[i - 1] == str[i + 1] && aeiou.find(str[i - 1]) != string::npos) {
				str[i] = '#';
				str[i + 1] = '#';
			}
		}
		for (int i = 0; i < str.length(); i++) {
			if (str[i] != '#')
				cout << str[i];
		}
		cout << ' ';
	}
}