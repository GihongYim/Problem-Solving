#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, p;
    int nums[3];
    while (1) {
        cin >> n;
        if (n == 0)
            break;
        cin >> p;
        if (2 * p < n) {
            if (p % 2 == 1) {
                // cout << p + 1 << ' ';
                // cout << n - p << ' ' << n - p + 1 << '\n';
                nums[0] = p + 1;
                nums[1] = n - p;
                nums[2] = n - p + 1;
            } else {
                // cout << p - 1 << ' ';
                // cout << n - p + 1 << ' ' << n - p + 2 << '\n';
                nums[0] = p - 1;
                nums[1] = n - p + 1;
                nums[2] = n - p + 2;
            }
        } else {
            if (p % 2 == 1) {
                // cout << n - p << ' ' << n - p + 1 << ' ';
                // cout << p + 1 << '\n';
                nums[0] = n - p;
                nums[1] = n - p + 1;
                nums[2] = p + 1;
            } else {
                // cout << n - p + 1 << ' ' << n - p + 2 << ' ';
                // cout << p - 1 << ' ' << '\n';
                nums[0] = n - p + 1;
                nums[1] = n - p + 2;
                nums[2] = p - 1;
            }
        }
        sort(nums, nums + 3);
        cout << nums[0] << ' ' << nums[1] << ' ' << nums[2] << '\n';
    }
    return 0;
}