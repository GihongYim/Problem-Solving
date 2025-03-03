#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n;
	vector<int> an;
	
	cin >> n;
	an.resize(n);
	
	for (int i = 0; i < n; i++) {
		cin >> an[i];
	}
	
	reverse(an.begin(), an.end());
	
	long long p, q;
	long long nextp;
	long long nextq;
	p = 1;
	q = an[0];
	
	for (int i = 1; i < n; i++) {
		nextp = q;
		nextq = an[i] * q + p;
		p = nextp;
		q = nextq;
	}
	cout << q - p << ' ' << q << '\n';
	

	return 0;
}