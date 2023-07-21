#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    int arr1Sum, arr2Sum;
    arr1Sum = 0;
    arr2Sum = 0;
    if (arr1.size() > arr2.size()) {
        answer = 1;
    } else if (arr1.size() < arr2.size()) {
        answer = -1;
    } else {
        for (int i = 0; i < arr1.size(); i++)
            arr1Sum += arr1[i];
        for (int i = 0; i < arr2.size(); i++)
            arr2Sum += arr2[i];
        if (arr1Sum > arr2Sum)
            answer = 1;
        else if (arr1Sum < arr2Sum)
            answer = -1;
        else
            answer = 0;
    }
    return answer;
}