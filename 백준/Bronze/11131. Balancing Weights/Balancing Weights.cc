#include <iostream>
#include <vector>
using namespace std;

string determine_balance(int N, const vector<int>& weights) {
	int total_torque = 0;
	for (int w : weights) {
		total_torque += 100 * w;
	}
	
	if (total_torque < 0) return "Left";
	if (total_torque > 0) return "Right";
	return "Equilibrium";
}

int main() {
	int T;
	cin >> T;
	
	for (int t = 0; t < T; ++t) {
		int N;
		cin >> N;
		vector<int> weights(N);
		for (int i = 0; i < N; ++i) {
			cin >> weights[i];
		}
		
		cout << determine_balance(N, weights) << endl;
	}
	
	return 0;
}
