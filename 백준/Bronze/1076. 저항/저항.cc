#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	map<string, int> value;
	long long result;
	value["black"] = 0;
	value["brown"] = 1;
	value["red"] = 2;
	value["orange"] = 3;
	value["yellow"] = 4;
	value["green"] = 5;
	value["blue"] = 6;
	value["violet"] = 7;
	value["grey"] = 8;
	value["white"] = 9;
	string a, b, c;

	cin >> a >> b >> c;
	result = value[a] * 10 + value[b];
	for (int i = 0; i < value[c]; i++) {
		result *= 10;
	}
	cout << result << '\n';
	return 0;
}