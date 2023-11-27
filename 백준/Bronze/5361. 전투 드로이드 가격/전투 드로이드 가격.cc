#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int T;
	double cost[5] = {350.34, 230.90, 190.55, 125.30, 180.90};
	int part;

	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		double total = 0.0;
		for (int i = 0; i < 5; i++) {
			cin >> part;
			total += (part * cost[i]);
		}
		cout << "$" << fixed << setprecision(2) <<  total << '\n';
	}
	return 0;
}