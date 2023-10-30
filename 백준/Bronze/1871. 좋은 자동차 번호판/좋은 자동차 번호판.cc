#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	string numberPlate;
	string LLL, DDDD;
	int first_num;
	int second_num;
	int diff;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> numberPlate;

		LLL = numberPlate.substr(0, 3);
		DDDD = numberPlate.substr(4);
		first_num = 0;
		for (int j = 0; j < LLL.length(); j++) {
			first_num *= 26;
			first_num += (LLL[j] - 'A');
		}
		second_num = stoi(DDDD);
		diff = abs(first_num - second_num);
		if (diff <= 100) {
			cout << "nice\n";
		} else {
			cout << "not nice\n";
		}
	}
	return 0;
}