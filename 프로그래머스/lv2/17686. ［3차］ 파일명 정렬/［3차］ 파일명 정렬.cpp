#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;
typedef struct s_file {
    string head;
    int number;
    string tail;
    int index;
} t_file;

int fcmp(t_file a, t_file b) {
    if (a.head == b.head) {
        if (a.number == b.number) {
            return a.index < b.index;
        } else {
            return a.number < b.number;
        }
    } else {
        return a.head < b.head;
    }
}

string stolower(string str) {
    string ret;
    for (int i = 0; i < str.length(); i++) {
        ret += tolower(str[i]);
    }
    return ret;
}

vector<string> solution(vector<string> files) {
    vector<string> answer;
    vector<t_file> newfiles;
    int numberPos;
    int tailPos;
    for (int i = 0; i < files.size(); i++) {
        t_file newfile;
        numberPos = files[i].find_first_of("0123456789");
        newfile.head = files[i].substr(0, numberPos);
        newfile.head = stolower(newfile.head);
        tailPos = files[i].find_first_not_of("0123456789", numberPos);
        newfile.number = stoi(files[i].substr(numberPos, tailPos - numberPos));
        if (tailPos == string::npos) {
            newfile.tail = "";
        } else {
            newfile.tail = files[i].substr(tailPos);
        }
        newfile.index = i;
        newfiles.push_back(newfile);
    }
    sort(newfiles.begin(), newfiles.end(), fcmp);
    for (int i = 0; i < newfiles.size(); i++) {
        answer.push_back(files[newfiles[i].index]);
    }
    return answer;
}