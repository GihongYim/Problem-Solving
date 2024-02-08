#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int cum[10];
    int num[10];
    for (int i = 0; i < 10; i++) {
        cin >> num[i];
    }
    cum[0] = num[0];
    for (int i = 1; i < 10; i++) {
        cum[i] = cum[i - 1] + num[i];
    }
    int min_num = num[0];

    for (int i = 0; i < 10; i++) {
        if (abs(cum[i] - 100) <= abs(min_num - 100)) {
            if (abs(cum[i] - 100) == abs(min_num - 100) && cum[i] > min_num)
                min_num = cum[i];
            min_num = cum[i];
        }
    }
    cout << min_num << '\n';
    return 0;
}