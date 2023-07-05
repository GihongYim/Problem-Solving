#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	string bin;
	int ret;
	cin >> n;
	for (int t = 1; t <= n; t++) {
		ret = 0;
		cin >> bin;
		for (int i = 0; i < bin.length(); i++) {
			ret *= 2;
			if (bin[i] == '1')
				ret++;
		}
		cout << ret << '\n';
	}
	return 0;
}