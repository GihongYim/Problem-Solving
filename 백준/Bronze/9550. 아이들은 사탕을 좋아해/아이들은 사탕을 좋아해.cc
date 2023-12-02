#include <iostream>
using namespace std;


int main(void) 
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int t;
	int n, k;
	int candy[101];

	cin >> t;
	for (int test_case = 1; test_case <= t; test_case++) {
		cin >> n >> k;
		int answer = 0;
		for (int i = 0; i < n; i++) {
			cin >> candy[i];
			answer += (candy[i] / k);
		}
		cout << answer << '\n';
	}	
}