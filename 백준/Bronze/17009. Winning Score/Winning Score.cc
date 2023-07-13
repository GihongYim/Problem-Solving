#include <iostream>
using namespace std;

int getScore()
{
	int answer = 0;
	int score;

	cin >> score;
	answer += (score * 3);
	cin >> score;
	answer += (score * 2);
	cin >> score;
	answer += (score * 1);
	return answer;
}


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int apples, bananas;

	apples = 0;
	bananas = 0;
	apples = getScore();
	bananas = getScore();
	
	if (apples > bananas)
		cout << "A\n";
	else if (apples < bananas)
		cout << "B\n";
	else
		cout << "T\n";
	return 0;
}