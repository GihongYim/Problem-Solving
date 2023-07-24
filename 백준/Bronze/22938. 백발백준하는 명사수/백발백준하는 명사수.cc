#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long x1,x2,y1,y2,r1,r2;

	cin >> x1 >> y1 >> r1;
	cin >> x2 >> y2 >> r2;
	if ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) < (r1 + r2) * (r1 + r2))
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}