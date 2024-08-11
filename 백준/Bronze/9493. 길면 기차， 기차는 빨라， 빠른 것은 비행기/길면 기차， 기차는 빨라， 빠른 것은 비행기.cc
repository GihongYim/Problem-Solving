#include <bits/stdc++.h>
using namespace std;

int main()
{
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL); cout.tie(NULL);
	int M, A, B;
	while (1) {
		cin >> M >> A >> B;
		if (M == 0 && A == 0 && B == 0)
			break;
		double diff = M / ((double)A) -  M / ((double)B);
		// cout << diff << '\n';
		int hour = diff;
		diff -= hour;
		diff *= 60;
		int minute = diff;
		diff -= minute;
		diff *= 60;
		int second = round(diff);

		// cout << hour << ":";
		// cout << fixed;
		// cout << setprecision(2) << minute << ":";
		// cout << setprecision(2) << second << '\n';
		printf("%d:%0.2d:%0.2d\n", hour, minute, second);
	}
	return 0;
}