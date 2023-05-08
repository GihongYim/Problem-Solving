#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int ch[2][27];
	string a,b;
	int cnt = 0;

	fill(ch[0], ch[0] + 27, 0);
	fill(ch[1], ch[1] + 27, 0);
	cin >> a >> b;
	for (int i = 0; i < a.length(); i++)
		ch[0][a[i] - 'a']++;
	for (int i = 0; i < b.length(); i++)
		ch[1][b[i] - 'a']++;
	for (int i = 0; i < 27; i++)
		cnt += max(ch[0][i], ch[1][i]) - min(ch[0][i], ch[1][i]);
	cout << cnt;
	return 0;	
}