#include <iostream>
#include <string>
using namespace std;


int main(void)
{
	int ch[28];
	string line;
	int topch;
	
	for (int i = 0; i < 28; i++)
		ch[i] = 0;
	while (getline(cin, line))
	{
		if (cin.eof())
			break ;
		for (unsigned int i = 0; i < line.length(); i++)
		{
			ch[line[i] - 'a']++;
		}
	}
	topch = 0;
	for (int i = 0; i < 28; i++)
	{
		if (ch[i] > topch)
			topch = ch[i];
	}
	for (int i = 0; i < 28; i++)
	{
		if (ch[i] == topch)
			cout << (char)(i + 'a');
	}
	return 0;
}