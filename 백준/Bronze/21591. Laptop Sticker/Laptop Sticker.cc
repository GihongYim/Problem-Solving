#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int wc,hc,ws,hs;

	cin >> wc >> hc >> ws >> hs;

	if (wc < ws + 2 || hc < hs + 2)
		cout << "0\n";
	else
		cout << "1\n";
	return 0;
}
