#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int p, c;
	int total = 0;
	
	cin >> p;
	cin >> c;
	
	total = p * 50 - c * 10;
	
	if (p > c)
		total += 500;
	
	cout << total << '\n';

	return 0;
}