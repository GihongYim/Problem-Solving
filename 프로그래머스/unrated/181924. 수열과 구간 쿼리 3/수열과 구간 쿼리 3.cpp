#include <string>
#include <vector>

using namespace std;
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (unsigned int i = 0; i < queries.size(); i++)
    {
        swap(arr[queries[i][0]], arr[queries[i][1]]);
    }
    
    return arr;
}