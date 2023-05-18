#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    long long totalMul = 1;
    long long totalSqrt = 0;
    for (unsigned int i = 0; i < num_list.size(); i++)
    {
        totalMul *= num_list[i];
        totalSqrt += num_list[i];
    }
    if (totalMul < totalSqrt * totalSqrt)
        answer = 1;
    else 
        answer = 0;
    return answer;
}