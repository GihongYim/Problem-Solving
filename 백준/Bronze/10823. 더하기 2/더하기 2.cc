#include <iostream>
#include <string>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string total;
	string line;
	long long num = 0;
	while (cin >> line) {		
		total += line;
	}
	int pos = 0;
	int next_pos;
	while (1) {
		next_pos = total.find(',', pos);
		if (next_pos == string::npos)
			break;
		num += stoi(total.substr(pos, next_pos - pos));
		pos = next_pos + 1;
	}
	num += stoi(total.substr(pos));
	cout << num << '\n';
	return 0;
}
