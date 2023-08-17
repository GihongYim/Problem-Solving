#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int total = 0;
	vector<int> dwarf(9);
	vector<int> fake;
	for (int i = 0; i < 9; i++) {
		cin >> dwarf[i];
		total += dwarf[i];
	}
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (total - dwarf[i] - dwarf[j] == 100) {
				fake.push_back(i);
				fake.push_back(j);
				break ;
			}
		}
		if (!fake.empty())
			break;
	}
	for (int i = 0; i < 9; i++) {
		if (i == fake[0] || i == fake[1]) {
			continue ;
		}
		cout << dwarf[i] << '\n';
	}
	return 0;
}