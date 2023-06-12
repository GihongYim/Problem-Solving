#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int i = 0;
    int j = arr.size() - 1;
    while (i < arr.size() && arr[i] != 2)
        i++;
    if (i == arr.size())
    {
        answer.push_back(-1);
        return answer;
    }
    while (j >= 0 && arr[j] != 2)
        j--;
    
    for (int curr = i; curr <= j; curr++)
        answer.push_back(arr[curr]);
    return answer;
}