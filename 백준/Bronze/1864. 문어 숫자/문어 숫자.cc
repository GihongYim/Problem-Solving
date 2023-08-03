#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	string octave = "-\\(@?>&%";
	string number;
	int answer = 0;
	int digit;
	while (1) {
		answer = 0;
		cin >> number;
		if (number == "#")
			break ;
		for (int i = 0; i < number.length(); i++) {
			answer *= 8;
			if (number[i] == '/')
				digit = -1;
			else {
				digit = find(octave.begin(), octave.end(), number[i]) - octave.begin();
			}
			answer += digit;
		}
		cout << answer << '\n';
	}
	return 0;
}