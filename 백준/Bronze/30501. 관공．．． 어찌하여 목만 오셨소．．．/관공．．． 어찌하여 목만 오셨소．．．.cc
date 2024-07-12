#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;


	cin >> N;

	for (int i = 0; i < N; i++) {
		string name;
		
		cin >> name;
		if (name.find("S") != name.npos) {
			cout << name << '\n';
			return 0;
		}
	}
	return 0;
}