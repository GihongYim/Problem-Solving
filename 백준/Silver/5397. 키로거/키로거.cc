#include <iostream>
#include <list>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int L;
	string origin;
	list<char> password;
	list<char>::iterator it;
	list<char>::iterator next;
	cin >> L;

	for (int l = 0; l < L; l++) {
		cin >> origin;
		password.clear();
		it = password.end();
		for (int i = 0; i < origin.length(); i++) {
			if (origin[i] == '<') {
				if (it != password.begin())
					it--;
			}
			else if (origin[i] == '>') {
				if (it != password.end())
					it++;
			}
			else if (origin[i] == '-') {
				if (it != password.begin()) {
					next = it;
					it--;
					password.erase(it);
					it = next;

				}
			} else {
				password.insert(it, origin[i]);
			}
		}
		if (!password.empty()) {
			for (it = password.begin(); it != password.end(); it++) {
				cout << (*it);
			}
		}
		cout << '\n';
	}
	return 0;
}