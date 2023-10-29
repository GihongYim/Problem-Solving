#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	string before, after;
	bool detection = true;
	cin >> N;
	cin >> before;
	cin >> after;
	if (N % 2 == 1) {
		for (int i = 0; i < before.length(); i++) {
			if (before[i] == after[i]) {
				detection = false;
				break;
			}
		}
	} else {
		for (int i = 0; i < before.length(); i++) {
			if (before[i] != after[i]) {
				detection = false;
				break;
			}
		}
	}
	if (detection) {
		cout << "Deletion succeeded\n";
	} else {
		cout << "Deletion failed\n";
	}
	return 0;
}