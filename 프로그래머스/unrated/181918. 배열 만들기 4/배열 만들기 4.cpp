#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    
    unsigned int i = 0;
    while (i < arr.size())
    {
        if (stk.empty())
            stk.push_back(arr[i++]);
        else if (stk.back() < arr[i])
            stk.push_back(arr[i++]);
        else
            stk.pop_back();
    }
    return stk;
}