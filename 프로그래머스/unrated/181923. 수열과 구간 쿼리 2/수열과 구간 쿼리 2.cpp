#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    int         lowerbound;
    for (unsigned int i = 0; i < queries.size(); i++)
    {
        lowerbound = -1;
        for (int j = queries[i][0]; j <= queries[i][1]; j++)
        {
            if (arr[j] > queries[i][2] && (arr[j] < lowerbound || lowerbound == -1))
                lowerbound = arr[j];
        }
        answer.push_back(lowerbound);
    }
    return answer;
}