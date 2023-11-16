#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T;
	int total = 0;
	int num;
	string line;

	cin >> T;
	cin.ignore();
	for (int t = 0; t < T; t++) {
		total = 0;
		getline(cin, line);
		stringstream sin(line);

		while (sin >> num) {
			total += num;
		}
		cout << total << '\n';
	}
	return 0;
}