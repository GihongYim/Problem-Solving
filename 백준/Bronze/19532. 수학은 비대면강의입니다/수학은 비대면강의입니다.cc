#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a,b,c,d,e,f,x,y;
	cin >> a >> b >> c >> d >> e >> f;
	x = (e * c - b * f) / (a * e - b * d);
	y = (-d * c + a * f) / (a * e - b * d);
	cout << x << ' ' << y << '\n';
	return 0;
}