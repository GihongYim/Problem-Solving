#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string phone;
	string sub;

	cin >> phone;
	sub = phone.substr(0, 3);
	if (sub == "555")
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}