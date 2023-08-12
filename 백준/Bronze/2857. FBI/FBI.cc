#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	string fbi;
	int count = 0;
	for (int i = 1; i <= 5; i++) {
		cin >> fbi;
		if (fbi.find("FBI") != string::npos) {
			cout << i << ' ';
			count++;
		}
	}
	if (!count) {
		cout << "HE GOT AWAY!\n";
	}
	return 0;
}