#include <iostream>
#include <vector>
using namespace std;

// Function to check if a trash key can match the customer's key
bool canMatch(const vector<int>& customerKey, const vector<int>& trashKey) {
	for (size_t i = 0; i < customerKey.size(); ++i) {
		if (trashKey[i] > customerKey[i]) {
			return false;
		}
	}
	return true;
}

int main() {
	while (true) {
		int m, n;
		cin >> m >> n;

		// Termination condition
		if (m == 0 && n == 0) {
			break;
		}

		vector<int> customerKey(m);
		for (int i = 0; i < m; ++i) {
			cin >> customerKey[i];
		}

		int matchCount = 0;
		for (int i = 0; i < n; ++i) {
			vector<int> trashKey(m);
			for (int j = 0; j < m; ++j) {
				cin >> trashKey[j];
			}
			if (canMatch(customerKey, trashKey)) {
				++matchCount;
			}
		}

		cout << matchCount << endl;
	}

	return 0;
}