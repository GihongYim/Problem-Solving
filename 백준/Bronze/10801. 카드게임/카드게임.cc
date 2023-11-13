#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a[10];
	int b[10];
	int aa = 0, bb = 0;

	for (int i = 0; i < 10; i++) 
		cin >> a[i];
	for (int i = 0; i < 10; i++)
		cin >> b[i];
	
	for (int i = 0; i < 10; i++) {
		if (a[i] > b[i])
			aa++;
		else if (a[i] < b[i])
			bb++;
	}
	if (aa > bb) {
		cout << "A\n";
	} else if (aa < bb) {
		cout << "B\n";
	} else {
		cout << "D\n";
	}
	return 0;
}