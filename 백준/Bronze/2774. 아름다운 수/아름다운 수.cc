#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int T;
    long long num;
    int count[10];
    int beauti;
    cin >> T;

    for (int test_case = 1; test_case <= T; test_case++) {
        fill(count, count + 10, 0);
        cin >> num;
        if (num == 0) {
            count[0]++;
        } else {
            while (num > 0) {
                count[num % 10]++;
                num /= 10;
            }
        }
        beauti = 0;
        for (int i = 0; i < 10; i++) {
            if (count[i]) 
                beauti++;
        }
        cout << beauti << '\n';
    }
    return 0;
}