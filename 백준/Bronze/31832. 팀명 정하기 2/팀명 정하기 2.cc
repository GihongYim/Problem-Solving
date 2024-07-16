#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;

	cin >> N;
	for (int t = 0; t < N; t++) {
		string s;

		
		cin >> s;
		if (s.length() > 10)
			continue;
		int digit = 0;
		int upperCase = 0;
		int lowerCase = 0;
		for (int i = 0; i < s.length(); i++){
			if (isupper(s[i])) {
				upperCase++;
			} else if (islower(s[i])) {
				lowerCase++;
			} else if (isdigit(s[i])) {
				digit++;
			}
		}
		if (s.length() == digit)
			continue;
		if (upperCase > lowerCase) 
			continue;
		cout << s << '\n';
	}

	return 0;
}