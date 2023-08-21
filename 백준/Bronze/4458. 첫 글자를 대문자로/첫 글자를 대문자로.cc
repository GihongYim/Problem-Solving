#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	string line;

	cin >> N;
	getline(cin, line, '\n');
	for (int i = 0; i < N; i++) {
		getline(cin, line, '\n');
		line[0] = toupper(line[0]);
		cout << line << '\n';
	}
	return 0;
}