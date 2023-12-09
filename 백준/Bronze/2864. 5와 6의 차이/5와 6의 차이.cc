#include <bits/stdc++.h>
using namespace std;

string repMin(string str)
{
	string result;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '6') {
			result += '5';
		} else {
			result += str[i];
		}
	}
	return result;
}

string repMax(string str)
{
	string result;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '5') {
			result += '6';
		} else {
			result += str[i];
		}
	}
	return result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	string a, b;

	cin >> a >> b;
	cout << stoi(repMin(a)) + stoi(repMin(b)) << ' ' << stoi(repMax(a)) + stoi(repMax(b)) << '\n'; 	
	return 0;
}