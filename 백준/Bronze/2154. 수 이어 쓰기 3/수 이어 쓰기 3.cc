#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);


	string str = "";

	int N;

	cin >> N;
	for (int i = 1; i <= N; i++) {
		str += to_string(i);
	}
	int pos = str.find(to_string(N));
	cout << pos + 1 << '\n';


	return 0;
}