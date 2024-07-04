#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int cnt = 0;
	string line;
	int pos = 0;
	int nextPos;

	cin >> line;

	while (1) {
		nextPos = line.find("DKSH", pos);
		if (nextPos == std::string::npos)
			break;
		cnt++;
		pos = nextPos + 1;
	}
	cout << cnt << '\n';

	return 0;
}