#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int sad = 0;
	int happy = 0;
	int pos;
	string message;

	getline(cin, message);

	pos = 0;
	while (1)
	{
		pos = message.find(":-)", pos);
		if (pos == string::npos)
			break;
		pos++;
		happy++;
	}
	pos = 0;
	while (1)
	{
		pos = message.find(":-(", pos);
		if (pos == string::npos)
			break;
		pos++;
		sad++;
	}
	if (happy == 0 && sad == 0)
		cout << "none\n";
	else if (happy > sad)
		cout << "happy\n";
	else if (happy < sad)
		cout << "sad\n";
	else
		cout << "unsure\n";
	return 0;
}