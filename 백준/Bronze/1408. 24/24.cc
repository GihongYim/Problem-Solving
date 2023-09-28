#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int sh, sm, ss, s;
	int rh, rm, rs, r;
	int ah, am, as;
	int temp;
	string str;

	cin >> str;
	sh = stoi(str.substr(0, 2));
	sm = stoi(str.substr(3, 2));
	ss = stoi(str.substr(6, 2));
	s = sh * 3600 + sm * 60 + ss;

	cin >> str;
	rh = stoi(str.substr(0, 2));
	rm = stoi(str.substr(3, 2));
	rs = stoi(str.substr(6, 2));
	r = rh * 3600 + rm * 60 + rs;

	if (s < r) {
		temp = r - s;
	} else {
		temp = 24 * 3600 - (s - r);
	}
	ah = temp / 3600;
	temp -= (ah * 3600);
	am = temp / 60;
	temp -= (am * 60);
	as = temp;
	printf("%02d:%02d:%02d\n", ah, am, as);
	return 0;
}