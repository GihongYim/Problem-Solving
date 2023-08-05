#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string ch;
	string sentence;
	int answer;
	while (1)
	{
		cin >> ch;
		if (ch == "#")
			break;
		answer = 0;
		getline(cin, sentence);
		for (int i = 0; i < sentence.length(); i++) {
			if (ch[0] == tolower(sentence[i]))
				answer++;
		}
		cout << ch << ' ' << answer << '\n';
	}
	return 0;
}