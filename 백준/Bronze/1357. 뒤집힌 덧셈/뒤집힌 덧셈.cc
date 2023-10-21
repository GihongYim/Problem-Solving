#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int X, Y, Z;
	string strX, strY, strZ;

	cin >> X >> Y;
	strX = to_string(X);
	strY = to_string(Y);

	reverse(strX.begin(), strX.end());
	reverse(strY.begin(), strY.end());
	X = stoi(strX);
	Y = stoi(strY);
	strZ = to_string(X + Y);
	reverse(strZ.begin(), strZ.end());
	Z = stoi(strZ);
	cout << Z << '\n';
	return 0;
}