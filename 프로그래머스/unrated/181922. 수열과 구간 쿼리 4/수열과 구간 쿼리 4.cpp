#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {

    for (unsigned int i = 0; i < queries.size(); i++)
    {
        for (unsigned int j = 0; j < arr.size(); j++)
        {
            if (j >= queries[i][0] && j <= queries[i][1] && j % queries[i][2] == 0)
            {
                arr[j]++;
            }
        }
    }
    return arr;
}