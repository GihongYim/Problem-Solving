#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int keyNum[255] = {0, };

	string keyMap[8] = {"\`1QAZ", "2WSX", "3EDC", "4RFV5TGB", "6YHN7UJM", "8IK,", "9OL.", "0-=P\[\];\'\/"};

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < keyMap[i].length(); j++) {
			keyNum[keyMap[i][j]] = i;
		}
	}
	int cnt[8] = {0, };
	string str;

	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		cnt[keyNum[str[i]]]++;
	}
	for (int i = 0; i < 8; i++) {
		cout << cnt[i] << '\n';
	}

	return 0;
}