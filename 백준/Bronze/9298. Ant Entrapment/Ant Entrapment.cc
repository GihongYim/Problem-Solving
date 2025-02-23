#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int T;
	int N;
	double x, y;
	cin >> T;
	
	cout << fixed << setprecision(9);
	
	for (int t = 1; t <= T; t++) {
		cin >> N;
		double minX = __DBL_MAX__;
		double maxX = -__DBL_MAX__;
		double minY = __DBL_MAX__;
		double maxY = -__DBL_MAX__;
		for (int i = 0; i < N; i++) {
			cin >> x >> y;
			minX = min(x, minX);
			maxX = max(x, maxX);
			minY = min(y, minY);
			maxY = max(y, maxY);		
		}
		cout << "Case " << t  << ": Area " << (maxX - minX) * (maxY - minY) << ", ";
		cout << "Perimeter " << 2 * ((maxX - minX) + (maxY - minY)) << '\n';
	}
	
	
	return 0;
}