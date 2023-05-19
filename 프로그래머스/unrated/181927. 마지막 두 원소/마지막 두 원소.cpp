#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    unsigned int idx = num_list.size() - 1;
    if (num_list[idx] > num_list[idx - 1])
        num_list.push_back(num_list[idx] - num_list[idx - 1]);
    else
        num_list.push_back(num_list[idx] * 2);
    answer = num_list;
    return answer;
}