#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define LANGUAGE 0
#define MATH 1
#define ENGLISH 2
#define SCIENCE 3
#define OTHERLANGUAGE 4

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int T;
	ll a[5];
	ll answer = 0;


	fill(a, a + 5, 0);
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> a[i];
	}

	if (a[LANGUAGE] > a[ENGLISH]) {
		answer += (a[LANGUAGE] - a[ENGLISH]) * 508LL;
	} else {
		answer += (a[ENGLISH] - a[LANGUAGE]) * 108LL;
	}

	if (a[MATH] > a[SCIENCE]) {
		answer += (a[MATH] - a[SCIENCE]) * 212LL;
	} else {
		answer += (a[SCIENCE] - a[MATH]) * 305LL;
	}
	answer += a[OTHERLANGUAGE] * 707LL;
	answer *= 4763LL;

	cout << answer << '\n';

	return 0;
}