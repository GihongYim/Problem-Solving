#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <iterator>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	map<string, int> data;

	string name;
	string status;
	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> name >> status;

		if (status == "enter")
			data[name] = 1;
		else
			data[name] = 0;
	}
	map<string, int>::reverse_iterator it;
	for (it = data.rbegin(); it != data.rend(); it++)
	{
		if ((*it).second == 1)
			cout << (*it).first << '\n';
	}
	return 0;
}