#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T;
	int a, b;
	string plainText;

	cin >> T;
	for (int t = 0; t < T; t++) {
		cin >> a >> b;
		cin >> plainText;
		for (int i = 0; i < plainText.length(); i++) {
			plainText[i] = ((a * (plainText[i] - 'A') + b) % 26) + 'A';
		}
		cout << plainText << '\n';
	}
	return 0;
}