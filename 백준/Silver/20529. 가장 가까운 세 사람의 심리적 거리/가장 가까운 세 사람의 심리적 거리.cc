#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;


int answer = 200000;

int	getMbti(string person)
{
	int ret = 0;
	if (person[0] == 'I')
		ret += (1 << 3);
	if (person[1] == 'N')
		ret += (1 << 2);
	if (person[2] == 'F')
		ret += (1 << 1);
	if (person[3] == 'P')
		ret += (1 << 0);
	return ret;
}

int dist(int a, int b)
{
	int ret = 0;	
	int temp = a ^ b;

	for (int i = 0; i < 4; i++)
	{
		if (temp & (1 << i))
			ret++;
	}
	// cout << a << ' ' << b << " : " << ret << '\n';
	return ret;
}

int	getDistance(vector<int> stack)
{
	int ret;

	ret = 0;
	ret += dist(stack[0] ,stack[1]);
	ret += dist(stack[1] ,stack[2]);
	ret += dist(stack[0] ,stack[2]);

	return ret;
}

void	search(map<int, int>& mbti, map<int, int>::iterator curr, vector<int>& stack)
{
	if (answer == 0)
		return ;
	if (stack.size() == 3)
	{
		answer = min(answer, getDistance(stack));

		return ;
	}

	if ((*curr).second > 0)
	{
		(*curr).second--;
		stack.push_back((*curr).first);
		search(mbti, curr, stack);
		stack.pop_back();
		(*curr).second++;
		if (answer == 0)
			return ;
	}
	curr++;
	if (curr == mbti.end())
		return ;
	search(mbti, curr, stack);
}

int main(void)
{
	int T, N;
	string person;
	map<int, int> mbti;
	vector<int> stack;
	int mbtiNum;

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> T;
	for (int t = 1; t <= T; t++){
		mbti.clear();
		answer = 200000;
		cin >> N;
		for (int i = 0; i < N; i++){
			cin >> person;
			mbtiNum = getMbti(person);
			if (mbti.find(mbtiNum) == mbti.end())
				mbti[mbtiNum] = 1;
			else
				mbti[mbtiNum]++;
		}
		search(mbti, mbti.begin(), stack);
		cout << answer << '\n';
	}
	return 0;
}