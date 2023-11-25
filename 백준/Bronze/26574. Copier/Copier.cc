#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	int n;
	int project;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> project;

		cout << project << ' ' << project << '\n';
	}
	return 0;
}