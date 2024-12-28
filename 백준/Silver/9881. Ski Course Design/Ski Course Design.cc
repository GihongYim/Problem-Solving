#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;

	cin >> N ; 

	vector<int> h(N);

	for (int i = 0; i < N; i++) {
		cin >> h[i];
	}

	sort(h.begin(), h.end());

	int diff = h.back() - h.front();
	int minCost = 0x3f3f3f3f;

	if (diff <= 17) {
		minCost = 0;
	} else {
		diff -= 17;
		for (int i = 0; i <= diff; i++) {
			int cost = 0;
			int left = h.front() + i;
			for (int j = 0; j < h.size(); j++) {
				if (h[j] > left) break;
				cost += (left - h[j]) * (left - h[j]); 
			}

			int right = h.back() - (diff - i);
			for (int j = h.size() - 1; j >= 0; j--) {
				if (h[j] < right) break;
				cost += (right - h[j]) * (right - h[j]);
			}
			minCost = min(minCost, cost);
		}
	}

	cout << minCost << '\n';
	return 0;
}