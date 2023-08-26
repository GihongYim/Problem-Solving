#include <string>
#include <vector>
using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> burger;
    for (int i = 0; i < ingredient.size(); i++) {
            if (ingredient[i] == 1 && burger.size() >= 3 && 
                    burger[burger.size() - 3] == 1 && 
                    burger[burger.size() - 2] == 2 && 
                    burger[burger.size() - 1] == 3) {
                answer++;
                burger.pop_back();
                burger.pop_back();
                burger.pop_back();
            } else {
                burger.push_back(ingredient[i]);
            }
        
    }
    return answer;
}