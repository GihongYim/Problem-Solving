#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int dist = 10000000;
    sort(array.begin(), array.end());
    for (int i = 0; i < array.size(); i++)
    {
        if (abs(array[i] - n) < dist)
        {
            dist = abs(array[i] - n);
            answer = array[i];
        }
    }
    return answer;
}