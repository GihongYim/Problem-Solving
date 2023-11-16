#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	string str;
	int pos;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> str;
		if (str == "P=NP")
			cout << "skipped\n";
		else {
			pos = str.find('+');
			cout << stoi(str.substr(0, pos)) + stoi(str.substr(pos + 1)) << '\n';
		}
	}
	return 0;
}