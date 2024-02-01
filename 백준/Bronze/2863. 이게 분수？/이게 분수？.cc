#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

void rotate(float arr[2][2]) {
    float tmp;
    tmp = arr[0][0];
    arr[0][0] = arr[1][0];
    arr[1][0] = arr[1][1];
    arr[1][1] = arr[0][1];
    arr[0][1] = tmp;
}

float calculate(float arr[2][2]) {
    return arr[0][0] / arr[1][0] + arr[0][1] / arr[1][1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    float arr[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }
    float maxNum = calculate(arr);
    int maxIndex = 0;
    float result;
    for (int i = 1; i <= 3; i++) {
        rotate(arr);
        result = calculate(arr);
        if (result > maxNum) {
            maxIndex = i;
            maxNum = result;
        }
    }
    cout << maxIndex << '\n';
    return 0;
}