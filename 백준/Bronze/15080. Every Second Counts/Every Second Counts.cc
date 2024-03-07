#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string semi;
    int num;
    int start = 0;
    int end = 0;
    for (int i = 0; i < 3; i++) {
        start *= 60;
        cin >> num;
        start += num;
        if (i == 2)
            break;
        cin >> semi;
    }

    for (int i = 0; i < 3; i++) {
        end *= 60;
        cin >> num;
        end += num;
        if (i == 2)
            break;
        cin >> semi;
    }
    if (start > end) {
        end += 60 * 60 * 24;
    }
    cout << end - start << '\n';
    return 0;
}