#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int k;
	int n;
	string warning, person;
	int cnt;
	cin >> k;

	for(int t = 1; t <= k; t++) {
		cnt = 0;
		cin >> n;

		cin >> warning;

		for (int i = 0; i < n; i++) {
			cin >> person;
			for (int j = 0; j < warning.size(); j++) {
				if (person.find(warning[j]) != string::npos) {
					cnt++;
					break;
				}
			}
		}
		cout << "Data Set " << t << ":\n" << cnt << "\n\n";
	}

	return 0;
}