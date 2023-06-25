#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    bool changed;
    while (1) {
        changed = false;
        for (int i = 0; i < arr.size(); i++){
            if (arr[i] >= 50 && arr[i] % 2 == 0){
                arr[i] /= 2;
                changed = true;
            } else if (arr[i] < 50 && arr[i] % 2 == 1){
                arr[i] = arr[i] * 2 + 1;
                changed = true;
            }
        }
        if (!changed) break;
        answer++;
    }
    return answer;
}