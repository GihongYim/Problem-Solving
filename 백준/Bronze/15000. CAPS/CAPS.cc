#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string str;

	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		str[i] = toupper(str[i]);
	}
	cout << str << '\n';
	return 0;
}