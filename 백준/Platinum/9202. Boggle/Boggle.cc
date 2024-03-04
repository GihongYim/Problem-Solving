#include <iostream>
#include <cstring>
#include <unordered_set>
using namespace std;

int w, b;
bool visited[4][4];
string map[4];
unordered_set<string> res;
int dy[8] = { -1, -1, -1, 0, 0, 1, 1, 1 }, dx[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };
int score[9] = { 0, 0, 0, 1, 1, 2, 3, 5, 11 };

struct trie {
	trie* next[26];
	bool isFinish;

	trie() {
		memset(this->next, NULL, sizeof(this->next));
		this->isFinish = false;
	}

	~trie() {
		for (int i = 0; i < 26; ++i)
			if (this->next[i])
				delete this->next[i];
	}

	void insert(string key) {
		trie* pNode = this;
		for (int i = 0; i < key.length(); ++i) {
			int index = key[i] - 'A';
			if (!pNode->next[index])
				pNode->next[index] = new trie();
			pNode = pNode->next[index];
		}
		pNode->isFinish = true;
	}

	void search(int y, int x, string key) {
		// 기저조건 : 문자열은 8글자를 넘지 않음
		if (key.length() > 8)return;
		visited[y][x] = true;
		key += map[y][x];

		trie* pNode = this->next[map[y][x] - 'A'];
		if (pNode == NULL) {
			visited[y][x] = false;
			return;
		}
		if (pNode->isFinish) {
			res.insert(key);
		}

		for (int dir = 0; dir < 8; ++dir) {
			int ny = y + dy[dir], nx = x + dx[dir];
			if (ny < 0 || ny >= 4 || nx < 0 || nx >= 4)continue;
			if (visited[ny][nx])continue;
			pNode->search(ny, nx, key);
		}
		visited[y][x] = false;
	}
};

int main() {

	trie* root = new trie();
	cin >> w;
	for (int i = 0; i < w; ++i) {
		string s;
		cin >> s;
		root->insert(s);
	}
	cin >> b;
	for (int i = 0; i < b; ++i) {
		for (int j = 0; j < 4; ++j) {
			cin >> map[j];
		}
		res.clear();
		for (int y = 0; y < 4; ++y)
			for (int x = 0; x < 4; ++x)
				root->search(y, x, "");

		string longest = "";
		int Max = 0, match = res.size(), scoreSum = 0;
		for (string item : res) {
			if (Max == item.length()) {
				longest = longest < item ? longest : item;
			}
			else if (Max < item.length()) {
				Max = item.length();
				longest = item;
			}
			scoreSum += score[item.length()];
		}
		cout << scoreSum << " " << longest << " " << match << "\n";
	}
	return 0;
}