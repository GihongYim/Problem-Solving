#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	long long M;
	long long mindiff = 2000000005;
	int start, end;
	cin >> N >> M;
	start = 0;
	end = 1;
	vector<long long> a(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	while (end < N) {
		if (start >= end) {
			end++;
		}
		else if (a[end] - a[start] >= M) {
			mindiff = min(mindiff, a[end] - a[start]);
			start++;
		} else {
			end++;
		}
	}
	cout << mindiff << '\n';
	return 0;
}