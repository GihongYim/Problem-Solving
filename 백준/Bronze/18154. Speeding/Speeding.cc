#include <bits/stdc++.h>
using namespace std;

int t[10005];
int d[1000000];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	double t, d;
	double prev_t, prev_d;
	int speed;
	int maxSpeed = 0;

	cin >> n;


	cin >> prev_t >> prev_d;

	for (int i = 1; i < n; i++) {
		cin >> t >> d;
		speed = ((d - prev_d) / (t - prev_t));
		maxSpeed = max(speed, maxSpeed);
		prev_t = t;
		prev_d = d;
	}

	cout << maxSpeed << '\n';

	return 0;
}