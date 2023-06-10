#include <iostream>
#include <vector>
using namespace std;

void check_perfect(int n)
{
	vector<int> divisor;
	int			total = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			divisor.push_back(i);
			total += i;
		}
	}
	if (total == n){
		cout << n << " = ";
		for (int i = 0; i < divisor.size(); i++){
			std::cout << divisor[i];
			if (i != divisor.size() -1)
				cout << " + ";
		}
		cout << '\n';
	}
	else{
		cout << n << " is NOT perfect.\n";
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;

	while (true)
	{
		cin >> n;
		if (n == -1)
			break;
		check_perfect(n);
	}
}