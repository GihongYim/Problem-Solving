#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	int d[4];
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	d[0] = h - y;
	d[1] = y;
	d[2] = x;
	d[3] = w - x;
	int min = 1001;
	for (int i = 0; i < 4; i++)
	{
		if (d[i] < min)
			min = d[i];
	}
	printf("%d", min);

}