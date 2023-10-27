#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string line;

	while (1){
		getline(cin, line);
		if (line =="EOI") {
			break;
		}
		for (int i = 0; i < line.length(); i++) {
			line[i] = tolower(line[i]);
		}
		if (line.find("nemo") != string::npos) {
			cout << "Found\n";
		} else {
			cout << "Missing\n";
		}
	}
	return 0;
}