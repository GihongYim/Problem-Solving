#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N;
	int ch[2][30];
	string a,b;
	bool valid;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		fill(ch[0], ch[0] + 30, 0);
		fill(ch[1], ch[1] + 30, 0);
		valid = true;
		cin >> a >> b;
		for (int j = 0; j < a.length(); j++)
		{
			ch[0][a[j] - 'a']++;
		}
		for (int j = 0; j < b.length(); j++)
		{
			ch[1][b[j] - 'a']++;
		}
		for (int j = 0; j < 27; j++)
		{
			if (ch[0][j] != ch[1][j])
			{
				valid = false;
				break ;
			}
		}
		if (valid)
		{
			cout << "Possible\n";
		}
		else
		{
			cout << "Impossible\n";
		}
	}

}