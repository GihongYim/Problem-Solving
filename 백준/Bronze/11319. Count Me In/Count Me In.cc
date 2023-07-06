#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int S;
	string vowels = "AEIOUaeiou";
	string sentence;
	int consonant_cnt;
	int vowel_cnt;
	cin >> S;
	getline(cin, sentence, '\n');
	for (int s = 0; s < S; s++) {
		getline(cin, sentence, '\n');
		consonant_cnt = 0;
		vowel_cnt = 0;
		for (int i = 0; i < sentence.length(); i++) {
			if (vowels.find(sentence[i]) != string::npos){
				vowel_cnt++;
			}
			else if (sentence[i] != ' ') {
				consonant_cnt++;
			}
		}
		cout << consonant_cnt << ' ' << vowel_cnt << '\n';
	}
	return 0;
}