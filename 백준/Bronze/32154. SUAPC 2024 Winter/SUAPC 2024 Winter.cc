#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	vector<string> result;

	result.push_back("");
	result.push_back("A B C D E F G H J L M");
	result.push_back("A C E F G H I L M");
	result.push_back("A C E F G H I L M");
	result.push_back("A B C E F G H L M");
	result.push_back("A C E F G H L M");
	result.push_back("A C E F G H L M");
	result.push_back("A C E F G H L M");
	result.push_back("A C E F G H L M");
	result.push_back("A C E F G H L M");
	result.push_back("A B C F G H L M");

	int n;

	cin >> n;
	int cnt = (result[n].length() + 1) / 2;
	cout << cnt << '\n';
	cout << result[n] << '\n';
	

	return 0;
}