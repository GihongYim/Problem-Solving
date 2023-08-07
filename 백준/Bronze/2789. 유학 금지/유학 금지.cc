#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string cambridge = "CAMBRIDGE";
	string input;
	string answer = "";

	cin >> input;
	for (int i = 0; i < input.length(); i++) {
		if (cambridge.find(input[i]) == string::npos)
			answer += input[i];
	}
	cout << answer << '\n';
	return 0;
}