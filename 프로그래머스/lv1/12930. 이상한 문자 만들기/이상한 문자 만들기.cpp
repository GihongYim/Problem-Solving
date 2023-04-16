#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int cur = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i]== ' '){
            answer += s[i];
            cur = 0;
            continue;
        }
        if(cur % 2 == 0){
            answer += toupper(s[i]);
        }else{
            answer += tolower(s[i]);
        }
        cur++;
    }
    return answer;
    /*
    int cur = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i]==' '){
            cur = 0;
            answer += s[i];
            continue;
        }
        if(cur % 2 == 0){
            if(s[i]>='a' && s[i]<='z'){
                answer += (char)(s[i]-'a'+'A');
            }else{
                answer += s[i];
            }
        }
        else{
            if(s[i]>='a' && s[i]<='z'){
                answer += s[i];
            }else{
                answer += (char)(s[i]-'A'+'a');
            }
        }
        cur++;
    }
    return answer;
    */
}