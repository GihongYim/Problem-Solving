#include <iostream>
#include <ctime>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int bYear, bMonth, bDay;
	int year, month, day;
	int age = 0;
	cin >> bYear >> bMonth >> bDay;
	cin >> year >> month >> day;
	age = year - bYear;
	if (month < bMonth)
	{
		age--;
	}
	else if (month == bMonth)
	{
		if (day < bDay)
			age--;
	}
	cout << age << '\n';
	age = year - bYear + 1;
	cout << age << '\n';
	cout << age - 1 << '\n';
	return 0;
}