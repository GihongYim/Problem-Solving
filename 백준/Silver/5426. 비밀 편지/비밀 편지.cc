#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    int width = 0;
    string line;
    for (int t = 0; t < n; t++) {
        cin >> line;
        for (int i = 1; i <= 100; i++) {
            if (i * i == line.size()) {
                width = i;
                break;
            }
        }
        string result = "";
        for (int i = 0; i < width; i++) {
            for (int j = 0; j < width; j++) {
                result += line[j * width + (width - 1 - i)];
            }
        }
        cout << result << '\n';
    }



    return 0;
}