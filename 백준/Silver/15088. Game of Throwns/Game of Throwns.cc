#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, k;

	cin >> n >> k;
	
	int prev;
	int pos = 0;
	string cmd;
	int t = 0;
	vector<int> v;

	for (int i = 0; i < k; i++) {
		cin >> cmd;
		if (cmd == "undo") {
			pos -= prev;
			pos = pos % n;
			if (pos < 0) {
				pos += n;
			}
			cin >> t;
			for (int j = 0; j < t; j++) {
				int undo = v.back();
				v.pop_back();
				pos -= undo;
				pos %= n;
				if (pos < 0)
					pos += n;
			}
		} else {
			t = stoi(cmd);
			pos = (pos + t) % n;
			if (pos < 0) {
				pos += n;
			}
			v.push_back(t);
		}
	}

	cout << pos << '\n';

	return 0;
}