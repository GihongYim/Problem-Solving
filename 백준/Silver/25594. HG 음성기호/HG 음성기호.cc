#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	map<char, string> m;

	m['a'] = "aespa";
	m['b'] = "baekjoon";
	m['c'] = "cau";
	m['d'] = "debug";
	m['e'] = "edge";
	m['f'] = "firefox";
	m['g'] = "golang";
	m['h'] = "haegang";
	m['i'] = "iu";
	m['j'] = "java";
	m['k'] = "kotlin";
	m['l'] = "lol";
	m['m'] = "mips";
	m['n'] = "null";
	m['o'] = "os";
	m['p'] = "python";
	m['q'] = "query";
	m['r'] = "roka";
	m['s'] = "solvedac";
	m['t'] = "tod";
	m['u'] = "unix";
	m['v'] = "virus";
	m['w'] = "whale";
	m['x'] = "xcode";
	m['y'] = "yahoo";
	m['z'] = "zebra";

	string s;

	cin >> s;
	string result = "";
	for (int i = 0; i < s.length(); i++) {
		if (m[s[i]] == s.substr(i, m[s[i]].length())) {
			result += s[i];
			i += m[s[i]].length() - 1; 
		} else {
			result = "ERROR!\n";
			break;
		}
	}
	if (result != "ERROR!\n") {
		cout << "It's HG!\n";
		cout << result << '\n';
	} else {
		cout << result << '\n';
	}

	return 0;
}