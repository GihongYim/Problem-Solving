#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;

	cin >> N;

	for (int t = 1; t <= N; t++) {
		string line = "";
		while (line == "") {
			getline(cin, line);
		}
		
		stringstream sin(line);
		
		string word;
		bool start = true;
		while(sin >> word) {
			if (start) {
				cout << "god";
				start = false;
			} else {
				cout << word;
			}
		}
		cout << '\n';
	}

	return 0;
}