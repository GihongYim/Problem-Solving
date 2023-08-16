#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    int twoSum;
    vector<int>::iterator it;
    int index;
    for (int i = 0; i < number.size() - 2; i++) {
        for (int j = i + 1; j < number.size() - 1; j++) {
            twoSum = number[i] + number[j];
            index = j + 1;
            while (1){
                it = find(number.begin() + index, number.end(), -twoSum);
                if (it == number.end())
                    break ;
                index = it - number.begin() + 1;
                answer++;
            }
        }
    }
    return answer;
}