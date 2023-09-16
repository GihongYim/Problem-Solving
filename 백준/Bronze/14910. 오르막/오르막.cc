#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int prev;
	int curr;
	bool increment = true;

	cin >> prev;

	while (cin >> curr) {
		if (prev > curr) {
			increment = false;
		}
		prev = curr;
	}
	if (increment){
		cout <<"Good\n";
	} else {
		cout << "Bad\n";
	}
	return 0;
}