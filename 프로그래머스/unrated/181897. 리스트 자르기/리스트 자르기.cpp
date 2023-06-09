#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    int start;
    int end;
    
    
    if (n == 1)
    {
        start = 0;
        end = slicer[1];
        for (int i = start; i <= end; i++)
            answer.push_back(num_list[i]);
    }
    else if (n == 2)
    {
        start = slicer[0];
        end = num_list.size() - 1;
        for (int i = start; i <= end; i++)
            answer.push_back(num_list[i]);
    }
    else if (n == 3)
    {
        start = slicer[0];
        end = slicer[1];
        for (int i = start; i <= end; i++)
            answer.push_back(num_list[i]);
    }
    else if (n == 4)
    {
        start = slicer[0];
        end = slicer[1];
        for (int i = start; i <= end; i+= slicer[2])
            answer.push_back(num_list[i]);
    }
    return answer;
}