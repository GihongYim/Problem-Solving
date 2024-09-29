#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string commonDef;

	cin >> commonDef;

	string indivDef;
	while (cin >> indivDef)
	{
		string name = "";
		string def = "";
		int pos = 0;
		for (int i = 0; i < indivDef.length(); i++) {
			if (isalpha(indivDef[i])) {
				name += indivDef[i];
			} else {
				pos = i;
				break;
			}
		}
		def = indivDef.substr(pos);
		def.pop_back();
		reverse(def.begin(), def.end());
		for (int i = 0; i < def.length(); i++) {
			if (def[i] == ']') {
				def[i + 1] = ']';
				def[i] = '[';
				i++;
			}
		}
		cout << commonDef << def << ' ' << name << ";\n";
	}
	return 0;
}