#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
    vector<int> temp(arr);
    for (int i = 0; i < query.size();i++)
    {
        answer.clear();
        if (i % 2 == 0)
        {
            for (int j = 0; j <= query[i]; j++)
                answer.push_back(temp[j]);
        }
        else
        {
            for (int j = query[i]; j < temp.size(); j++)
                answer.push_back(temp[j]); 
        }
        temp = answer;
    }
    return answer;
}