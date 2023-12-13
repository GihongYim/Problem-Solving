#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	string word;
	getline(cin, word);
	string temp;
	vector<string>v;
	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] == ' ')
		{
			v.push_back(temp);
			temp = "";
		}
		else
			temp += word[i];
	}
	v.push_back(temp);
	cout << char(v[0][0]-'a'+'A');
	for (int i = 1; i < v.size(); i++)
	{
		if (v[i] != "i" && v[i] != "pa" && v[i] != "te" && v[i] != "ni" && v[i] != "niti" && v[i] != "a" && v[i] != "ali" && v[i] != "nego" && v[i] != "no" && v[i] != "ili")
			cout << char(v[i][0] - 'a' + 'A');
	}
	cout << endl;
	
}