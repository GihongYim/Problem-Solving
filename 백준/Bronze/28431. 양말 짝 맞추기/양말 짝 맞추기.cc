#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	set<int> s;
	int sock;
	set<int>::iterator it;

	for (int i = 0; i < 5; i++) {
		cin >> sock;
		it = s.find(sock);
		if (it == s.end()) {
			s.insert(sock);
		} else {
			s.erase(it);	
		}
	}
	for (auto sock : s) {
		cout << sock << '\n';
	}
	return 0;
}