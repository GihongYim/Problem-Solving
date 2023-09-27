#include <string>
#include <vector>
#include <map>

using namespace std;
void search(string str, map<string, int>& dict, string alphabet, int& order) {
    if (str != "")
        dict.insert(make_pair(str, order++));
    
    if (str.length() == 5)
        return ;
    for (int i = 0; i < alphabet.length(); i++) {
        search(str + alphabet[i], dict, alphabet, order);
    }
}

int solution(string word) {
    int answer = 0;
    map<string, int> dict;
    int order = 1;
    string alphabet = "AEIOU";
    search("", dict, alphabet, order);
    answer = dict[word];
    return answer;
}