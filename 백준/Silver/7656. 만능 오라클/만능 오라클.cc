#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);


	string line;

	getline(cin, line);

	int sPos, ePos;

	ePos = -1;

	while (1) {
		sPos = line.find("What", ePos + 1);
		if (sPos == string::npos)
			break;
		ePos = line.find("?", sPos + 1);
		string sentence = line.substr(sPos, ePos - sPos + 1);

		if (sentence.find(".") != string::npos) {
			ePos = line.find(".", sPos + 1);
			continue;
		}
		sentence.replace(0, 4, "Forty-two");
		sentence.replace(sentence.length() - 1, 1, ".");
		cout << sentence << '\n';
	}




	return 0;
}