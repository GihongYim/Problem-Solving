#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string num1, op, num2;
	bool result;
	int test_case = 1;
	while (1) {
		cin >> num1 >> op >> num2;
		if (op == "E")
			break;
		if (op == ">") {
			result = stoi(num1) > stoi(num2);
		} else if (op == ">=") {
			result = stoi(num1) >= stoi(num2);
		} else if (op == "<") {
			result = stoi(num1) < stoi(num2);
		} else if (op == "<=") {
			result = stoi(num1) <= stoi(num2);
		} else if (op == "==") {
			result = stoi(num1) == stoi(num2);
		} else if (op == "!=") {
			result = stoi(num1) != stoi(num2);
		}
		cout << "Case " << test_case << ": ";
		if (result) {
			cout << "true\n";
		} else {
			cout << "false\n";
		}
		test_case++;
	}
	return 0;
}