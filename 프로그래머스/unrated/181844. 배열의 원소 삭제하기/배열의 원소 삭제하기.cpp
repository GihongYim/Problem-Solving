#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    vector<int>::iterator it;
    for (int i = 0 ; i < delete_list.size(); i++) {
        it = find(arr.begin(), arr.end(), delete_list[i]);
        if (it != arr.end())
            arr.erase(it);
    }
    answer = arr;
    return answer;
}