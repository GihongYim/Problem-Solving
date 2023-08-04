#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int dice;
	vector<int> person;
	cin >> N;
	for (int i = 0; i < N; i++) {
		vector<int> v(3);
		for (int j = 0; j < 3; j++) {
			cin >> dice;
			v[j] = dice;
		}
		sort(v.begin(), v.end());
		if (v[0] == v[1] && v[1] == v[2]) {
			person.push_back(10000 + v[0] * 1000);
		} else if (v[0] == v[1]) {
			person.push_back(1000 + v[1] * 100);
		} else if (v[1] == v[2]) {
			person.push_back(1000 + v[1] * 100);
		} else {
			person.push_back(v[2] * 100);
		}
	}
	sort(person.begin(), person.end());
	cout << person[person.size() - 1] << '\n';
	return 0;
}