#include <bits/stdc++.h>
using namespace std;

int operation(int a, string op, int b)
{
	if (op == "+") return a + b;
	else if (op == "-") return a - b;
	else if (op == "*") return a * b;
	else if (op == "/") return a / b;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int k1, k2, k3;
	string op1, op2;

	cin >> k1 >> op1 >> k2 >> op2 >> k3;

	int unordered = operation(operation(k1, op1, k2), op2, k3);
	int ordered = operation(k1, op1, operation(k2, op2, k3));

	cout << min(unordered, ordered) << '\n';
	cout << max(unordered, ordered) << '\n';

	return 0;
}