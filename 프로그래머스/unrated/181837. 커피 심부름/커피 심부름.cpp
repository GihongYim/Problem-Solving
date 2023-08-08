#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    map<string, int> menu;
    menu["iceamericano"] = 4500;
    menu["americanoice"] = 4500;
    menu["americano"] = 4500;
    menu["anything"] = 4500;
    menu["hotamericano"] = 4500;
    menu["americanohot"] = 4500;

    menu["icecafelatte"] = 5000;
    menu["cafelatteice"] = 5000;
    menu["hotcafelatte"] = 5000;
    menu["cafelattehot"] = 5000;
    menu["cafelatte"] = 5000;
    for (int i = 0; i < order.size(); i++) {
        answer += menu[order[i]];
    }   
    
    return answer;
}