#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	map<string, string> m;

	m["SONGDO"] = "HIGHSCHOOL";
	m["CODE"] = "MASTER";
	m["2023"] = "0611";
	m["ALGORITHM"] = "CONTEST";
	string req;

	cin >> req;
	cout << m[req];
}