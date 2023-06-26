#include <iostream>
using namespace std;

int main(void){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int k, d, a;
	char token;
	cin >> k >> token >> d >> token >> a;
	if (k + a < d || d == 0)
		cout << "hasu\n";
	else
		cout << "gosu\n";
	return 0;
}