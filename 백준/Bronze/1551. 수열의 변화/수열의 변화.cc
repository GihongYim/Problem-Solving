#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k;
    int arr[10001];

    string line;
    cin >> n >> k;
    cin >> line;
    cin >> line;
    for (int i = 0; i < line.size(); i++) {
        if (line[i] == ',')
            line[i] = ' ';
    }
    stringstream sin(line);
    for (int i = 0; i < n; i++) {
        sin >> arr[i];
    }
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1] - arr[j];
        }
        n--;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1)
            cout << ',';
        else
            cout << '\n';
    }
    return 0;
}