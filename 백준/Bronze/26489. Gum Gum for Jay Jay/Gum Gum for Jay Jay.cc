#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string line;
	int n = 0;
	while (getline(cin,line))
		n++;
	cout << n << '\n';
	return 0;
}