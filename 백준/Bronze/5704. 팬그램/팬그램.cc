#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string line;
	int ch[30];
	bool fangram;
	while (1) {
		getline(cin, line, '\n');
		if (line == "*")
			break;
		for (int i = 0; i < 30; i++) {
			ch[i] = 0;
		}
		for (int i = 0; i < line.length(); i++) { 
			if (line[i] == ' ') {
				continue;
			} else {
				ch[line[i] - 'a']++;
			}
		}
		fangram = true;
		for (int i = 0; i < 'z' - 'a' + 1; i++) {
			if (ch[i] == 0) {
				fangram = false;
				break;
			}
		}
		if (fangram) {
			cout << "Y\n";
		} else {
			cout << "N\n";
		}
	}
}