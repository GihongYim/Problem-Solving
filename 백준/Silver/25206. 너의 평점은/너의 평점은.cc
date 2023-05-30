#include <iostream>
#include <string>
#include <map>
#include <iomanip>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string subject;
	float		score;
	string grade;
	float totalScore = 0.0;
	float numOfScore = 0.0;
	map<string, float> table;
	table["A+"] = 4.5;
	table["A0"] = 4.0;
	table["B+"] = 3.5;
	table["B0"] = 3.0;
	table["C+"] = 2.5;
	table["C0"] = 2.0;
	table["D+"] = 1.5;
	table["D0"] = 1.0;
	table["F"] = 0.0;	
	

	while (1)
	{
		cin >> subject;
		if (cin.eof())
			break ;
		cin >> score;
		cin >> grade;
		if (grade == "P")
			continue;
		totalScore += score * table[grade];
		numOfScore += score;
	}
	if (numOfScore == 0)
	{
		cout << 0.000000 << std::endl;
	}
	else
		cout << totalScore / numOfScore << std::endl;
	return 0;
}