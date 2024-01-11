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
    string num;
    string target;
    bool valid;
    cin >> n;

    for (int test_case = 1; test_case <= n; test_case++) {
        cin >> num;
        target = num;
        valid = false;
        for (int i = 0; i < num.length() - 1; i++) {
            if (num[i] < num[i + 1]) {
                valid = true;
                break;
            }
        }
        if (valid) {
            next_permutation(num.begin(), num.end());
            cout << num << '\n';
        } else {
            cout << "BIGGEST\n";
        }
    }
    return 0;
}