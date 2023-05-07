#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	int num[205];
	int a,v;
	fill(num, num + 205, 0);
	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		num[a + 100]++;
	}
	cin >> v;
	cout << num[v + 100];
	return 0;
}