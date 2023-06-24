#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	int num;

	char ch = '=';

	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> num;
		for (int j = 0; j < num; j++) {
			cout << ch;
		}
		cout << '\n';
	}
	return 0;
}