#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;

	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	int ss = 0;
	int ee = v.size() - 1;

	while (v[ss] == 1)
		ss++;

	while (v[ee] == 2)
		ee--;

	int cnt = 0x3f3f3f3f;
	int left = 0;
	int right = 0;

	for (int i = ss; i <= ee; i++) {
		if (v[i] == 1) right++;
	}
	int ll = 0;
	int rr = right;
	for (int i = ss; i <= ee; i++) {
		if (v[i] == 1) {
			rr--;
		}
		if (v[i] == 2){
			ll++;
		}
		cnt = min(cnt, ll + rr);
	}
	if (cnt != 0x3f3f3f3f)
		cout << cnt << '\n';
	else
		cout << 0 << '\n';
	return 0;
}