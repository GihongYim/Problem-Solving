#include <string>
#include <vector>
#include <map>
#include <sstream>
// morse = { 
//     '.-':'a','-...':'b','-.-.':'c','-..':'d','.':'e','..-.':'f',
//     '--.':'g','....':'h','..':'i','.---':'j','-.-':'k','.-..':'l',
//     '--':'m','-.':'n','---':'o','.--.':'p','--.-':'q','.-.':'r',
//     '...':'s','-':'t','..-':'u','...-':'v','.--':'w','-..-':'x',
//     '-.--':'y','--..':'z'
// }


using namespace std;

string solution(string letter) {
    string answer = "";
    map<string, char> morse;
    morse[".-"] = 'a';
    morse["-..."] = 'b';
    morse["-.-."] = 'c';
    morse["-.."] = 'd';
    morse["."] = 'e';
    morse["..-."] = 'f';
    morse["--."] = 'g';
    morse["...."] = 'h';
    morse[".."] = 'i';
    morse[".---"] = 'j';
    morse["-.-"] = 'k';
    morse[".-.."] = 'l';
    morse["--"] ='m';
    morse["-."] = 'n';
    morse["---"] = 'o';
    morse[".--."] = 'p';
    morse["--.-"] = 'q';
    morse[".-."] = 'r';
    morse["..."] = 's';
    morse["-"] = 't';
    morse["..-"] = 'u';
    morse["...-"] = 'v';
    morse[".--"] = 'w';
    morse["-..-"] = 'x';
    morse["-.--"] = 'y';
    morse["--.."] = 'z';
    
    stringstream sin(letter);
    string temp;
    while (sin >> temp) {
        answer.push_back(morse.find(temp)->second);
    }
    
    return answer;
}