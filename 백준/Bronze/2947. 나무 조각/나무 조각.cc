#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<int> v(5);

	int temp;
	for (int i = 0; i < 5; i++) {
		cin >> v[i];
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0 ; j < 4 - i; j++) {
			if (v[j] > v[j + 1]) {
				temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
				for (int s = 0; s < 5; s++) {
					cout << v[s] << ' ';
				}
				cout << '\n';
			}
		}
	}
	return 0;
}