#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string note, str, key;
	str == "";
	cin >> note;
	for (int i = 0; i < note.length(); i++) {
		if (note[i] >= '0' && note[i] <= '9')
			continue;
		str += note[i];
	}
	cin >> key;
	if (str.find(key) != string::npos) {
		cout << "1\n";
	} else {
		cout << "0\n";
	}
	return 0;
}