#include <bits/stdc++.h>
using namespace std;

typedef struct s_word
{
	string word;
	int cnt = 0;
} Word;

bool vcmp(Word a, Word b)
{
	if (a.cnt != b.cnt) {
		return a.cnt > b.cnt;
	}
	if (a.word.length() != b.word.length()) {
		return a.word.length() > b.word.length();
	}
	return a.word < b.word;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	map<string, int> m;

	int N, M;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		string word;

		cin >> word;
		if (m.find(word) == m.end()) {
			m.insert(make_pair(word, 0));
		}
		m[word]++;
	}
	vector<Word> v;
	for (auto it : m)
	{
		if (it.first.length() >= M) 
		{
			Word newWord;
			newWord.word = it.first;
			newWord.cnt = it.second;
			v.push_back(newWord);
		}
	}
	sort(v.begin(), v.end(), vcmp);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].word << '\n';
	}
	return 0;
}